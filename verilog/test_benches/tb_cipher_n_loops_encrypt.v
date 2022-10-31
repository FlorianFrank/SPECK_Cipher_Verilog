`timescale 1ns / 1ps

`include "../defines/cipher_settings.vh"
`include "../defines/main_module_defines.vh"

//% \addtogroup test_bench Test Benches
//% @{
module tb_cipher_n_loops_encrypt(
	);

//% Clock signal driving the cipher
reg clk = 0;

//% Always block driving the input clock
initial begin
	forever #1 clk = ~clk;
end

//% Plaintext to encrypt
reg [127:0]plaintext  = 128'hCF1688B3FBC40C13472D4B6150645367;
//% 128-bit key used for the encryption
reg [127:0]key        = 128'h472D4B6150645367753778214125442A;

//% Array of signals to start a specific key schedule. (One signal per round)
reg [`NR_ROUNDS-1:0] signal_start_ks = 0;
//% Array of signals indicating that a key schedule is finished. (One signal per round)
wire [`NR_ROUNDS-1:0] signal_finished_ks;
//% Array of signals to start a specific round function. (One signal per round)
reg [`NR_ROUNDS-1:0] signal_start_rd = 0;
//% Array of signals indicating that a round function is finished. (One signal per round)
wire [`NR_ROUNDS-1:0] signal_finished_rd;

//% Temporary variable holding the subkeys k0 and k1 (TODO during production this should be done directly on the keys)
wire [127:0] subkeys[`NR_ROUNDS-1:0];
//% Temporary variable holding the ciphertext shared between the different round functions 
//% (TODO during production this should be done directly on the plaintext variable)
wire [127:0] ciphertext[`NR_ROUNDS-1:0];

//% Counter storing the current round to select the correct round function and key schedule
integer round_ctr = 0;

//% Only for debugging purposes, shows the current state of the currently executed key_schedule module
wire [3:0] key_schedule_state [`NR_ROUNDS-1:0];
//% Only for debugging purposes, shows the current state of the currently executed round_function module
wire [3:0] round_schedule_state [`NR_ROUNDS-1:0];

//% Round counter which is XOR'ed to each key schedule. See official cipher description
reg[63:0] static_round_ctr [`NR_ROUNDS-1:0];

//% Signal indicating to start the execution of the cipher.
reg start = 1;

//% State variable holding the current state of the state machine.
reg [2:0] state = 3'b0;

//% Counter varialbe used to initialize the static round counter
reg[63:0] i;
initial begin
	for (i = 0; i < `NR_ROUNDS; i = i + 1) begin
		static_round_ctr [i] = i;
	end
end


genvar i_gen;
//% Generate block generates NR_ROUNDS key_schedule and round functions 
generate
	for(i_gen = 0; i_gen < `NR_ROUNDS; i_gen = i_gen + 1) begin
		if(i_gen == 0) begin
			key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
													 .key(key), .round_ctr(static_round_ctr[i_gen]), .outKey(subkeys[i_gen]), .state_response(key_schedule_state[i_gen]));
			round_encrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(key[127:64]), .plaintext(plaintext),
									.ciphertext(ciphertext[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
		end
		else begin
		key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
													 .key(subkeys[i_gen-1]), .round_ctr(static_round_ctr[i_gen]), .outKey(subkeys[i_gen]), .state_response(key_schedule_state[i_gen]));
		round_encrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[i_gen-1][127:64]), .plaintext(ciphertext[i_gen -1]),
					.ciphertext(ciphertext[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
		end
	end
endgenerate


	always @ (posedge clk) begin

		case (state)
		
		`WAIT_FOR_START_SIGNAL: begin
			if(start == 1)
				state = state + 1;
		end

		`START_KEY_SCHEDULE: begin
				if(round_ctr == 0)
					$display("Iteration %d p0: %x p1: %x k0: %x k1: %x\n", 0, plaintext[63:0], plaintext[127:64], key[63:0], key[127:64]);
				signal_start_rd[round_ctr] = 1'b1;
				state = state + 1;
		end

		`STOP_KEY_SCHEDULE : begin
			signal_start_rd[round_ctr] = 1'b0;
			if(signal_finished_rd[round_ctr] == 1) begin
				state = state + 1;
				$display("Iteration %d p0: %x p1: %x", round_ctr,
				ciphertext[round_ctr][63:0], ciphertext[round_ctr][128:64]);
			end
		end

		`START_ROUND: begin
			signal_start_ks[round_ctr] = 1'b1;
			state = state + 1;
		end

		`STOP_ROUND: begin
			signal_start_ks[round_ctr] = 1'b0;
			if(signal_finished_ks[round_ctr] == 1) begin
				state = state + 1;
			end
		end

		`ITERATE_CTR: begin
			if(round_ctr < `NR_ROUNDS-1) begin
				$display("Iteration %d k0: %x k1: %x", round_ctr,
				subkeys[round_ctr][63:0], subkeys[round_ctr][128:64]);
				round_ctr = round_ctr + 1;
				state = `START_KEY_SCHEDULE;
			end
			else 
				state = state + 1;
		end
		
		`DONE: begin
			$display("Done p0: %x p1: %x", iphertext[round_ctr][63:0], ciphertext[round_ctr][128:64]);
			$stop;
		end

		endcase
	end

endmodule
//% @}