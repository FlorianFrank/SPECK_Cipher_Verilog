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
module test_cipher_n_loops(
	);
	
reg clk;

initial begin
	clk <= 0;
	#3000
	$stop;
end

initial begin
	forever #5 clk = ~clk;
end



reg [127:0]plaintext  = 128'h01110101001101110111100000100001010000010010010101000100001010100100011100101101010010110110000101010000011001000101001101100111;
reg [127:0]key= 128'b01110101001101110111100000100001010000010010010101000100001010100100011100101101010010110110000101010000011001000101001101100111;

reg [9:0] signal_start_ks = 0;
wire [9:0] signal_finished_ks;
reg [9:0] signal_start_rd = 0;
wire [9:0] signal_finished_rd;

wire [127:0] subkeys[9:0];
wire [127:0] ciphertext[9:0];
integer current_ctr = 0;

wire [3:0] key_schedule_state [9:0];
wire [3:0] round_schedule_state [9:0];

reg[63:0] round_ctr [9:0];

reg[63:0] i;
initial begin
	for (i = 0; i < 10; i = i + 1) begin
		round_ctr[i] = i;
	end
end


genvar i_gen;
	generate 
		for(i_gen = 0; i_gen < 10; i_gen = i_gen + 1) begin
			if(i_gen == 0) begin 
				key_schedule_encrypt key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(key), .round_ctr(round_ctr[i_gen]), .outKey(subkeys[i_gen]), .state_response(key_schedule_state[i_gen]));			
				round_encrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[i_gen][127:64]), .plaintext(plaintext), 
										.ciphertext(ciphertext[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
			else begin
			key_schedule_encrypt key_schedule(.clk(clk), .signal_start(signal_start_ks[i_gen]), .finished(signal_finished_ks[i_gen]),
														 .key(subkeys[i_gen-1]), .round_ctr(round_ctr[i_gen]), .outKey(subkeys[i_gen]), .state_response(key_schedule_state[i_gen]));			
			round_encrypt round (.clk(clk), .signal_start(signal_start_rd[i_gen]), .subkey(subkeys[i_gen][127:64]), .plaintext(ciphertext[i_gen -1]), 
						.ciphertext(ciphertext[i_gen]), .finished(signal_finished_rd[i_gen]), .state_response(round_schedule_state[i_gen]));
			end
		end
	endgenerate
	
	reg [2:0] state = 3'b0;
	
	parameter START_KEY_SCHEDULE = 0;
	parameter STOP_KEY_SCHEDULE = 1;
	parameter START_ROUND = 2;
	parameter STOP_ROUND = 3;
	parameter ITERATE_CTR = 4;
	
	always @ (posedge clk) begin
		case (state)
			START_KEY_SCHEDULE: begin
				$display("START_KEY_SCHEDULE");
				signal_start_ks[current_ctr] = 1'b1;
				state = state + 1;
		end
			STOP_KEY_SCHEDULE : begin
				$display("STOP KEY SCHEDULE");
				signal_start_ks[current_ctr] = 0'b1;
				if(signal_finished_ks[current_ctr] == 1) begin
					state = state + 1;
				end
			end
			START_ROUND: begin
				$display("Start round");
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
				if(current_ctr < 9) begin
					$display("CURRENT CTR %d", current_ctr);
					current_ctr = current_ctr + 1;
					state = 0;
				end
			end
	
		endcase
	end

endmodule
