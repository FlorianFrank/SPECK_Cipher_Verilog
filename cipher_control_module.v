`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:05 04/03/2022 
// Design Name: 
// Module Name:    cipher_control_module 
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
module cipher_control_module(
		input wire clk,
		input [127:0]key,
		input [127:0]plaintext,
		output wire [127:0]ciphertext,
		input start,
		output reg finished = 0,
		output [4:0]state_response
    );
	 
	reg [3:0]signal_start_round;
	reg [3:0]signal_start_key_schedule;
	
	wire [3:0]finished_round;
	wire [3:0]finished_key_schedule;
	
	reg [4:0] state;
	wire [127:0] outKey;
	wire [127:0] outKey2;

	wire [127:0]ciphertext_ret;
	wire [127:0]ciphertext_ret2;
	wire [127:0]ciphertext_ret3;
	
	

	 round round1(.clk(clk), .signal_start(signal_start_round[0]), .subkey(key[127:64]), .plaintext(plaintext), .ciphertext(ciphertext_ret), .finished(finished_round[0]));
	 key_schedule key_schedule1(.clk(clk), .signal_start(signal_start_key_schedule[0]), .finished(finished_key_schedule[0]), .key(key), .outKey(outKey));
	 
	 round round2(.clk(clk), .signal_start(signal_start_round[1]), .subkey(outKey[127:64]), .plaintext(ciphertext_ret), .ciphertext(ciphertext_ret2), .finished(finished_round[1]));
	 key_schedule key_schedule2(.clk(clk), .signal_start(signal_start_key_schedule[1]), .finished(finished_key_schedule[1]), .key(key), .outKey(outKey2));
	 
	 round round3(.clk(clk), .signal_start(signal_start_round[2]), .subkey(outKey2[127:64]), .plaintext(ciphertext_ret2), .ciphertext(ciphertext_ret3), .finished(finished_round[2]));
	 
	 localparam maxNrStates = 11;
	 parameter IDLE = 0;
	 parameter ROUND1 = 1;
	 parameter ROUND1_DISABLE_START = 2;
	 parameter ROUND1_WAIT_FINISHED = 3;
	 
	 parameter KEY_SCHEDULE1_DISABLE_START = 4;
	 parameter KEY_SCHEDULE1_WAIT_FINISHED = 5;
	 
	 parameter ROUND2_DISABLE_START = 6;
	 parameter ROUND2_WAIT_FINISHED = 7;
	 
	 parameter KEY_SCHEDULE2_DISABLE_START = 8;
 	 parameter KEY_SCHEDULE2_WAIT_FINISHED = 9;

	 parameter ROUND3_DISABLE_START = 10;
	 parameter ROUND3_WAIT_FINISHED = 11;

	 
	 task inc_counter;
		if (state < maxNrStates)
			state <= state + 5'h1;
		else
			state <= 5'h0;
	 endtask;
	 
	 
	 initial begin
		signal_start_round <= 4'h0;
		signal_start_key_schedule <= 4'h0;
		state <= 5'h0;
	 end
	 
	 always @ (posedge clk) begin
		case (state)
		
			IDLE: begin
				if(start == 1) begin
					inc_counter();
				end
				finished <= 0;
			end
			
			ROUND1: begin
				signal_start_round[0] <= 1;
				inc_counter();
				end
			
			ROUND1_DISABLE_START: begin
				signal_start_round[0] <= 0;
				inc_counter();
			end
			
			ROUND1_WAIT_FINISHED: begin
				if(finished_round[0] == 1) begin
					inc_counter();
					signal_start_key_schedule[0] <= 1;
					end
				end
				
			KEY_SCHEDULE1_DISABLE_START: begin
				signal_start_key_schedule[0] <= 0;
				inc_counter();
			end
			
			KEY_SCHEDULE1_WAIT_FINISHED: begin
				if(finished_key_schedule[0] == 1) begin
					inc_counter();
					signal_start_round[1] <= 1;
				end
			end
			
			ROUND2_DISABLE_START: begin
				signal_start_round[1] <= 0;
				inc_counter();
			end
			
			ROUND2_WAIT_FINISHED: begin
				if(finished_round[1] == 1) begin
					inc_counter();
					signal_start_key_schedule[1] <= 1;
					end
			end
			
			KEY_SCHEDULE2_DISABLE_START: begin
				signal_start_key_schedule[0] <= 0;
				inc_counter();
			end
			
			KEY_SCHEDULE2_WAIT_FINISHED: begin
				if(finished_key_schedule[1] == 1) begin
					inc_counter();
					signal_start_round[2] <= 1;
				end
			end
			
			ROUND3_DISABLE_START: begin
				signal_start_round[2] <= 0;
				inc_counter();
			end
			
						
			ROUND3_WAIT_FINISHED: begin
				if(finished_round[2] == 1) begin
					inc_counter();
					finished <= 1;
				end
			end
			
			
		endcase;
	 end

	assign ciphertext = ciphertext_ret3;
	assign state_response = signal_start_round;

endmodule
