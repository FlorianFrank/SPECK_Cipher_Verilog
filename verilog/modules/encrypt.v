`timescale 1ns / 1ps

`include "../defines/cipher_settings.vh"
`include "../defines/main_module_defines.vh"

//% \addtogroup main_modules Main Modules
//% @brief Main modules are the entry points to access the encryption and decryption algorithms.
//% @{
module encrypt(
	//% Input clock driving the cipher
	input wire clk,
	
	//% Start signal, must be toggled to logical 1 to start the encryption of one 
	input wire start,
	//% Is toggled to logical 1 and back to zero when all rounds are executed
	output reg finished,
	
	input wire [`KEY_SIZE-1:0] plaintext,
	input wire [`KEY_SIZE-1:0] key,
	output reg [`KEY_SIZE-1:0] ciphertext
	);

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
wire [127:0] ciphertext_local[`NR_ROUNDS-1:0];

//% Counter storing the current round to select the correct round function and key schedule
integer round_ctr = 0;

//% Only for debugging purposes, shows the current state of the currently executed key_schedule module
wire [3:0] key_schedule_state [`NR_ROUNDS-1:0];
//% Only for debugging purposes, shows the current state of the currently executed round_function module
wire [3:0] round_schedule_state [`NR_ROUNDS-1:0];

//% Round counter which is XOR'ed to each key schedule. See official cipher description
reg[63:0] static_round_ctr [`NR_ROUNDS-1:0];

//% State variable holding the current state of the state machine.
reg [2:0] state = 3'b0;

//% Counter varialbe used to initialize the static round counter
reg[63:0] i;
initial begin
	for (i = 0; i < `NR_ROUNDS; i = i + 1) begin
		static_round_ctr [i] <= i;
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
									.ciphertext(ciphertext_local[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
		end
		else begin
		key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
													 .key(subkeys[i_gen-1]), .round_ctr(static_round_ctr[i_gen]), .outKey(subkeys[i_gen]), .state_response(key_schedule_state[i_gen]));
		round_encrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[i_gen-1][127:64]), .plaintext(ciphertext_local[i_gen -1]),
					.ciphertext(ciphertext_local[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
		end
	end
endgenerate


	always @ (posedge clk) begin

		case (state)
		
			`WAIT_FOR_START_SIGNAL: begin
				if(start == 1)
					state <= state + 1;
				finished <= 0;
			end

			`START_KEY_SCHEDULE: begin
					signal_start_rd[round_ctr] <= 1'b1;
					state <= state + 1;
			end

			`STOP_KEY_SCHEDULE : begin
				signal_start_rd[round_ctr] <= 1'b0;
				if(signal_finished_rd[round_ctr] == 1) begin
					state <= state + 1;
				end
			end

			`START_ROUND: begin
				signal_start_ks[round_ctr] <= 1'b1;
				state <= state + 1;
			end

			`STOP_ROUND: begin
				signal_start_ks[round_ctr] <= 1'b0;
				if(signal_finished_ks[round_ctr] == 1) begin
					state <= state + 1;
				end
			end

			`ITERATE_CTR: begin
				if(round_ctr < `NR_ROUNDS-1) begin
					round_ctr <= round_ctr + 1;
					state <= `START_KEY_SCHEDULE;
				end
				else 
					state <= state + 1;
			end
			
			`DONE: begin
				finished <= 1;
				state <= `WAIT_FOR_START_SIGNAL;
			end

		endcase
	end

	assign cihertext = ciphertext_local[`NR_ROUNDS-1];

endmodule
//% @}