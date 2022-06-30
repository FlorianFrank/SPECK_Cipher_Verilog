`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Passau
// Engineer: Florian Frank
// 
// Create Date:    10:40:15 04/03/2022 
// Design Name: 
// Module Name:    key_schedule 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Implementation of the key-schedule module to generate new subkeys k0 and k1.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module key_schedule_decrypt(
	input wire clk,
	input wire signal_start,
	output reg finished,
	input wire [127:0] key,
	output reg [127:0] outKey,
	output wire [3:0] state_response
    );
	 
	 reg xor_vector = 64'h0; // TODO
	 
	 localparam shiftwidth_p0 = 3;
	 localparam shiftwidth_p1 = 8;
	 
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
	 
	 	 
	 function automatic [63:0] shift_right_reverse;
		 input [63:0] in;
		 input [4:0] shiftwidth;
		 begin
			shift_right_reverse = (in <<< shiftwidth) | (in >>> (64 - shiftwidth));
		 end
	 endfunction;
	 
	 function automatic [63:0] shift_left_reverse;
		 input [63:0] in;
		 input [4:0] shiftwidth;
		 begin
			shift_left_reverse = (in >>> shiftwidth) | (in <<< (64 - shiftwidth));
		 end
	 endfunction;
	 
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
				k1 <= k0 ^ k1;
				inc_state();
			end
			
			ADD_K0_K1: begin
				k1 <= shift_left_reverse(k1, 3);
				k0 <= k0 ^ xor_vector;
				inc_state();
			end
			
			SHIFT_K0_XOR_P2: begin
				k0 <= k0 - k1;
				inc_state();
			end
			
			XOR_k1_k2: begin
				k0 <= shift_right_reverse(k0, 8);
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
