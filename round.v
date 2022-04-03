`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:32:00 04/02/2022 
// Design Name: 
// Module Name:    round 
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
module round(
		input clk,
		input signal_start,
		input [64:0] subkey,
		input [127:0] plaintext,
		output reg[127:0] ciphertext,
		output reg finished,
		output [3:0]state_response
    );
	 
	 localparam shiftwidth_p0 = 8;
	 localparam shiftwidth_p1 = 3;
	 
	 
	 
	 /** Different states of the state machine. **/
	 localparam maxState = 6;
	 parameter WAIT_FOR_START = 0;
	 parameter ASSIGNMENT = 1;
	 parameter SHIFT = 2;
	 parameter ADDITION = 3;
	 parameter XOR_SUBKEY_SHIFT_P0 = 4;
	 parameter XOR_P0_P1 = 5;
	 parameter RESULT_ASSIGNMENT = 6;
	 
	 reg [4:0] state = 0;
	 
	 reg [63:0] p0;
	 reg [63:0] p1;
	 
	 task inc_counter;
		begin
			if(state < maxState)
				state = state + 1;
			else
				state = 0;
		end
	 endtask;
	 
	 initial begin
		state <= 0;
		finished <= 0;
	 end
	 
	 
	 always @ (posedge clk) begin
		case(state)
			WAIT_FOR_START: begin
				if(signal_start == 1)
					inc_counter();
				finished <= 0;
			end
			
			ASSIGNMENT: begin
				p0 <= plaintext[63:0];
				p1 <= plaintext[127:64];
				inc_counter();
			end
			
			SHIFT: begin
				p1 <= p1 >>> shiftwidth_p0;
				inc_counter();
			end
			
			ADDITION: begin
				p1 <= p0 + p1;
				inc_counter();
			end
			
			XOR_SUBKEY_SHIFT_P0: begin
				p0 <= p0 <<< shiftwidth_p1;
				p1 <= p1 ^ subkey;
			   inc_counter();
			end
			XOR_P0_P1: begin
				p0 <= p0 ^ p1;
				inc_counter();
			end
			RESULT_ASSIGNMENT: begin
				ciphertext[63:0] <= p0;
				ciphertext [127:64] <= p1;
				finished <= 1;
				inc_counter();
			end
		endcase;
		
	 end
	 

	assign state_response = state;

endmodule
