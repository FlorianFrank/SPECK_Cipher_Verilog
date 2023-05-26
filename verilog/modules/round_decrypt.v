`timescale 1ns / 1ps

`include "general_functions.v"
`include "round_function_defines.vh"

//% \addtogroup round_function Round Function
//% @{
module round_decrypt #(
    parameter integer KEY_SIZE = 128,
    parameter integer BLOCK_SIZE = 64
)
(
		//% Input clock running the state machine
		input clk,

		//% Subkey k1 which is XOR'ed with pt0
		input [BLOCK_SIZE-1:0] subkey,

		//% input cipher text splitted into c0 and c1
		input [KEY_SIZE-1:0] ciphertext,
		//% output plaintext of the current round
		output reg[KEY_SIZE-1:0] plaintext,

		//% Toggle the signal to 1 to start the round decrypt execution. (Must be reset until the cipher finishes)
		input signal_start,
		//% Toggle high signal when the execution is finished and the resulting plaintext are can be read.
		output reg finished,

		//% State only for debug purposes, don't need to be connected
		output [3:0]state_response
    );

	//% Counter of the state machine
	 reg [4:0] state = 0;

	 reg [BLOCK_SIZE-1:0] c0 = 0;
	 reg [BLOCK_SIZE-1:0] c1 = 0;
	 
	 initial begin
	   plaintext <= 0;
	   finished <= 0;
	   state <= 0;
	   c0 <= 0;
	   c1 <= 0;
	 end

	 task inc_counter;
		begin
			if(state < `MAX_STATE)
				state <= state + 1;
			else
				state <= 0;
		end
	 endtask

	 function automatic [BLOCK_SIZE-1:0] shift_right_reverse;
		 input [BLOCK_SIZE-1:0] in;
		 input [3:0] shiftwidth;
		 begin
			shift_right_reverse = (in <<< shiftwidth) | (in >>> (BLOCK_SIZE - shiftwidth));
		 end
	 endfunction

	 function automatic [BLOCK_SIZE-1:0] shift_left_reverse;
		 input [BLOCK_SIZE-1:0] in;
		 input [3:0] shiftwidth;
		 begin
			shift_left_reverse = (in >>> shiftwidth) | (in <<< (BLOCK_SIZE - shiftwidth));
		 end
	 endfunction

	 initial begin
		state <= 0;
		finished <= 0;
	 end


	 always @ (posedge clk) begin

		 case(state)

			`WAIT_FOR_START_DECRYPT: begin
				if(signal_start == 1)
					inc_counter();
				finished <= 0;
			end

			`ASSIGNMENT_DECRYPT: begin
				c0 <= ciphertext[BLOCK_SIZE-1:0];
				c1 <= ciphertext[KEY_SIZE-1:BLOCK_SIZE];
				inc_counter();
			end

			`XOR_C0_C1_DECRYPT: begin
				c1 <= c0 ^ c1;
				inc_counter();
			end

			`XOR_SUBKEY_SHIFT_C0_DECRYPT: begin
				c1 <= shift_left_reverse(c1, `SHIFT_WIDTH_P1);
				c0 <= c0 ^ subkey;
				inc_counter();
			end

			`ADDITION_DECRYPT: begin
				c0 <= c0 - c1;
				inc_counter();
			end

			`SHIFT_DECRYPT: begin
				c0 <= shift_right_reverse(c0, `SHIFT_WIDTH_P0);
				inc_counter();
			end

			`RESULT_ASSIGNMENT_DECRYPT: begin
				plaintext[BLOCK_SIZE-1:0] <= c0;
				plaintext[KEY_SIZE-1:BLOCK_SIZE] <= c1;
				finished <= 1;
				inc_counter();
			end
		endcase

	 end
	assign state_response = state;
endmodule
//% @}