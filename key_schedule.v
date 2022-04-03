`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:15 04/03/2022 
// Design Name: 
// Module Name:    key_schedule 
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
module key_schedule(
	input wire clk,
	input wire signal_start,
	output reg finished,
	input wire [127:0] key,
	output reg [127:0] outKey,
	output wire [3:0] state_response
    );
	 
	 reg xor_vector = 64'h0; // TODO
	 
	 localparam widthshift_k0 = 3;
	 localparam widthshift_k1 = 8;
	 
	 localparam maxNrStates = 6;
	 parameter WAIT_FOR_START = 0;
	 parameter ASSIGNMENT = 1;
	 parameter SHIFT_k1 = 2;
	 parameter ADD_K0_K1 = 3;
	 parameter SHIFT_K0_XOR_P2 = 4;
	 parameter XOR_k1_k2 = 5;
	 parameter ASSIGN_RESULTS = 6;
	 
	 reg [3:0] state;
	 reg [63:0] k0;
	 reg [63:0] k1;
	 
	 initial begin
		state <= 0;
		finished <= 0;
	end
	 
	 task inc_state;
	 begin
		if(state < maxNrStates) 
			state <= state + 1;
		else
			state <= 0;
	 end
	 endtask;
	 

	always @ (posedge clk) begin
		case (state)
			
			WAIT_FOR_START: begin
				if(signal_start)
					inc_state();
				finished <= 0;
			end
			
			ASSIGNMENT: begin
				k0 <= key[63:0];
				k1 <= key[127:64];
				inc_state();
			end
			
			SHIFT_k1: begin
				k1 <= k1 >>> widthshift_k1;
				inc_state();
			end
			
			ADD_K0_K1: begin
				k0 <= k0 + k1;
				inc_state();
			end
			
			SHIFT_K0_XOR_P2: begin
				k0 <= k0 <<< widthshift_k0;
				k1 <= k1 ^ xor_vector;
				inc_state();
			end
			
			XOR_k1_k2: begin
				k0 <= k0 ^ k1;
				inc_state();
			end
			
			ASSIGN_RESULTS: begin
				outKey[63:0] <= k0;
				outKey[127:64] <= k1;
				inc_state();
				finished <= 1;
			end
			
		endcase;
		
	end
	
	assign state_response = state;




endmodule
