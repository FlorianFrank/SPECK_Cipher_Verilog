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
		output [127:0]ciphertext 
    );
	 
	reg [3:0]signal_start_round;
	reg [3:0]signal_start_key_schedule;
	
	wire [3:0]finished_round;
	wire [3:0]finished_key_schedule;
	
	reg [5:0] state;
	wire [127:0] outKey;


	 round round1(.clk(clk), .signal_start(signal_start_round), .subkey(key[127:64]), .plaintext(plaintext), .ciphertext(ciphertext), .finished(finished_round[0]));
	 key_schedule key_schedule1(.clk(clk), .signal_start(signal_start_key_schedule[0]), .finished(finished_key_schedule[0]), .key(key), .outKey(outKey));
	 
	 round round2(.clk(clk), .signal_start(signal_start_round), .subkey(key[127:64]), .plaintext(plaintext), .ciphertext(ciphertext), .finished(finished_round[0]));
	 key_schedule key_schedule1(.clk(clk), .signal_start(signal_start_key_schedule[0]), .finished(finished_key_schedule[0]), .key(key), .outKey(outKey));
	 
	 parameter ROUND1 = 0;
	 parameter ROUND1_DISABLE_START = 1;
	 parameter ROUND1_WAIT_FINISHED = 2;
	 parameter KEY_SCHEDULE1_DISABLE_START = 3;
	 parameter KEY_SCHEDULE1_WAIT_FINISHED = 4;

	 
	 task inc_counter;
		state <= state + 1;
	 endtask;
	 
	 
	 initial begin
		signal_start_round <= 4'h0;
		signal_start_key_schedule <= 4'h0;
		state <= 4'h0;
	 end
	 
	 always @ (posedge clk) begin
		case (state)
			
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
			end
			
			KEY_SCHEDULE1_WAIT_FINISHED: begin
				if(finished_key_schedule[0] == 1) begin
					
				end
			end
			
		endcase;
	 end




endmodule
