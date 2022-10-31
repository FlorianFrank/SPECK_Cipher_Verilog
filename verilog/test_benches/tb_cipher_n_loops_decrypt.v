`timescale 1ns / 1ps


`include "../defines/cipher_settings.vh"
`include "../defines/main_module_defines.vh"

//% \addtogroup test_bench Test Benches
//% @brief Contains all test benches indicated by file names starting with tb_*
//% @{
module tb_cipher_n_loops_decrypt(
	);
	
//% Clock signal driving the cipher
reg clk = 0;

//% Always block driving the input clock
initial begin
	forever #1 clk = ~clk;
end

//% Ciphertext to decrypt
reg [`KEY_SIZE-1:0]ciphertext  = 128'h59280828B8D8D0403F862CF52B4E2E67;
//% 128-bit key used for the encryption
reg [`KEY_SIZE-1:0]key			 = 128'h472D4B6150645367753778214125442A;

//% Array of signals to start a specific key schedule. (One signal per round)
reg [`NR_ROUNDS-1:0] signal_start_ks = 0;
//% Array of signals indicating that a key schedule is finished. (One signal per round)
wire [`NR_ROUNDS-1:0] signal_finished_ks;
//% Array of signals to start a specific round function. (One signal per round)
reg [`NR_ROUNDS-1:0] signal_start_rd = 0;
//% Array of signals indicating that a round function is finished. (One signal per round)
wire [`NR_ROUNDS-1:0] signal_finished_rd;

//% Temporary variable holding the subkeys k0 and k1 (TODO during production this should be done directly on the keys)
wire [`KEY_SIZE-1:0] subkeys[`NR_ROUNDS-1:0];
//% Temporary variable holding the plaintext shared between the different round functions 
//% (TODO during production this should be done directly on the plaintext variable)
wire [`KEY_SIZE-1:0] plaintext[`NR_ROUNDS-1:0];

//% Counter storing the current round to select the correct round function and key schedule
integer round_ctr = 0;

wire [3:0] key_schedule_state [`NR_ROUNDS-1:0];
wire [3:0] round_schedule_state [`NR_ROUNDS-1:0];

//% Round counter which is XOR'ed to each key schedule. See official cipher description
reg[`BLOCK_SIZE-1:0] static_round_ctr [`NR_ROUNDS-1:0];

//% Signal indicating to start the execution of the cipher.
reg start = 1;

//% State variable holding the current state of the state machine.
reg [2:0] state = 3'b0;

reg[`BLOCK_SIZE-1:0] i;
initial begin
	for (i = 0; i <= `NR_ROUNDS; i = i + 1) begin
		static_round_ctr[i] = i;
	end
end


genvar i_gen;
	generate 
		for(i_gen = 0; i_gen < `NR_ROUNDS; i_gen = i_gen + 1) begin
			if(i_gen == 0) begin 
				key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(key), .round_ctr(static_round_ctr[i_gen]), .outKey(subkeys[i_gen]), 
														 .state_response(key_schedule_state[i_gen]));
				round_decrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[(`NR_ROUNDS -1) - i_gen][127:64]), .plaintext(plaintext[i_gen]), 
						.ciphertext(ciphertext), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
			else begin
			key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(subkeys[i_gen-1]), .round_ctr(static_round_ctr[i_gen]), .outKey(subkeys[i_gen]), 
														 .state_response(key_schedule_state[i_gen]));
														 
			round_decrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[(`NR_ROUNDS -1) - i_gen][127:64]), .plaintext(plaintext[i_gen]), 
						.ciphertext(plaintext[i_gen-1]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
		end
	endgenerate
	

	
	always @ (posedge clk) begin
		
		case (state)
		
		`WAIT_FOR_START_SIGNAL: begin
			if(start == 1) begin
				state <= `START_KEY_SCHEDULE;
			end
		end

		`START_KEY_SCHEDULE: begin
				signal_start_ks[round_ctr] = 1'b1;
				state <= `STOP_KEY_SCHEDULE;
		end
		
		`STOP_KEY_SCHEDULE: begin
				signal_start_ks[round_ctr] = 1'b0;
				if(signal_finished_ks[round_ctr] == 1) begin
					state = `CACHE_ROUND_KEYS;
					$display("Iteration %d k0: 0x%x k1: 0x%x", round_ctr, 
					subkeys[round_ctr][`BLOCK_SIZE-1:0], subkeys[round_ctr][`KEY_SIZE:`BLOCK_SIZE]);
				end
			end
			
		`CACHE_ROUND_KEYS: begin
			if(round_ctr < `NR_ROUNDS - 1) begin
				round_ctr <= round_ctr + 1;
				state <= `START_KEY_SCHEDULE;
			end
			else begin
				round_ctr <= 0;
				state <= `START_ROUND;
			end
		end
			
		`START_ROUND: begin
				signal_start_rd[round_ctr] <= 1'b1;
				state <= `STOP_ROUND;
			end
			
		`STOP_ROUND: begin
				signal_start_rd[round_ctr] <= 1'b0;
				if(signal_finished_rd[round_ctr] == 1) begin
					state = `ITERATE_CTR;
				end			
			end
			
		`ITERATE_CTR: begin
				if(round_ctr < `NR_ROUNDS) begin
					$display("Iteration %d p0: %x p1: %x", round_ctr, 
					plaintext[round_ctr][`BLOCK_SIZE-1:0], plaintext[round_ctr][`KEY_SIZE-1:`BLOCK_SIZE]);
					round_ctr = round_ctr + 1;
					state = `START_ROUND;
				end
			end
	
		`DONE: begin
				$display("Done p0: %x p1: %x", plaintext[round_ctr][63:0], plaintext[round_ctr][128:64]);
				$stop;
			end
	
		endcase
	end

endmodule
//% @}