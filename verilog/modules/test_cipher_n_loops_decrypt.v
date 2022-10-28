`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:36 10/26/2022 
// Design Name: 
// Module Name:    test 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

`include "cipher_settings.vh"


module test_cipher_n_loops_decrypt(
	);
	
reg clk;

initial begin
	clk <= 0;
	#300000
	$stop;
end

initial begin
	forever #1 clk = ~clk;
end



//reg [127:0]ciphertext  = 128'b11001111000101101000100010110011111110111100010000001100000100110100011100101101010010110110000101010000011001000101001101100111;
reg [127:0]ciphertext  = 128'b01011001001010000000100000101000101110001101100011010000010000000011111110000110001011001111010100101011010011100010111001100111;
reg [127:0]key= 128'b01000111001011010100101101100001010100000110010001010011011001110111010100110111011110000010000101000001001001010100010000101010;

reg [`NR_ROUNDS-1:0] signal_start_ks = 0;
wire [`NR_ROUNDS-1:0] signal_finished_ks;
reg [`NR_ROUNDS-1:0] signal_start_rd = 0;
wire [`NR_ROUNDS-1:0] signal_finished_rd;

wire [127:0] subkeys[`NR_ROUNDS-1:0];
wire [127:0] plaintext[`NR_ROUNDS-1:0];
integer current_ctr = 0;

wire [3:0] key_schedule_state [`NR_ROUNDS-1:0];
wire [3:0] round_schedule_state [`NR_ROUNDS-1:0];

reg[63:0] round_ctr [`NR_ROUNDS-1:0];


reg[63:0] i;
initial begin
	for (i = 0; i <= `NR_ROUNDS; i = i + 1) begin
		round_ctr[i] = i;
	end
end


genvar i_gen;
	generate 
		for(i_gen = 0; i_gen < `NR_ROUNDS; i_gen = i_gen + 1) begin
			if(i_gen == 0) begin 
				key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(key), .round_ctr(round_ctr[i_gen]), .outKey(subkeys[i_gen]), 
														 .state_response(key_schedule_state[i_gen]));
				round_decrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[(`NR_ROUNDS -1) - i_gen][127:64]), .plaintext(plaintext[i_gen]), 
						.ciphertext(ciphertext), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
			else begin
			key_schedule key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(subkeys[i_gen-1]), .round_ctr(round_ctr[i_gen]), .outKey(subkeys[i_gen]), 
														 .state_response(key_schedule_state[i_gen]));
														 
			round_decrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[(`NR_ROUNDS -1) - i_gen][127:64]), .plaintext(plaintext[i_gen]), 
						.ciphertext(plaintext[i_gen-1]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
		end
	endgenerate
	
	reg [2:0] state = 3'b0;
	
	parameter START_KEY_SCHEDULE = 0;
	parameter STOP_KEY_SCHEDULE = 1;
	parameter CACHE_ROUND_KEYS = 2;
	parameter START_ROUND = 3;
	parameter STOP_ROUND = 4;
	parameter ITERATE_CTR = 5;
	
	always @ (posedge clk) begin
		case (state)
			START_KEY_SCHEDULE: begin
				signal_start_ks[current_ctr] = 1'b1;
				state = state + 1;
		end
			STOP_KEY_SCHEDULE : begin
				signal_start_ks[current_ctr] = 1'b0;
				if(signal_finished_ks[current_ctr] == 1) begin
					state = state + 1;
					$display("Iteration %d k0: 0x%x k1: 0x%x", current_ctr, 
					subkeys[current_ctr][63:0], subkeys[current_ctr][128:64]);
				end
			end
			CACHE_ROUND_KEYS: begin
				if(current_ctr < `NR_ROUNDS - 1) begin
					current_ctr = current_ctr + 1;
					state = 0;
				end
				else begin
					current_ctr = 0;
					state = state + 1;
				end
			end
			START_ROUND: begin
				signal_start_rd[current_ctr] = 1'b1;
				state = state + 1;
			end
			STOP_ROUND: begin
				signal_start_rd[current_ctr] = 1'b0;
				if(signal_finished_rd[current_ctr] == 1) begin
					state = state + 1;
				end			
			end
			ITERATE_CTR: begin
				if(current_ctr < `NR_ROUNDS) begin
					$display("Iteration %d p0: %x p1: %x", current_ctr, 
					plaintext[current_ctr][63:0], plaintext[current_ctr][128:64]);
					current_ctr = current_ctr + 1;
					state = START_ROUND;
				end
			end
	
		endcase
	end

endmodule
