`timescale 1ns / 1ps

`include "../defines/cipher_settings.vh"
`include "../defines/round_function_defines.vh"

//% \addtogroup round_function Round Function
//% @brief Round functions executing the encryption of plaintext or decryption of ciphertext.
//% @{
module round_encrypt(
		//% Input clock running the state machine
		input clk,

		//% Subkey k1 which is XOR'ed with pt0
		input [`BLOCK_SIZE-1:0] subkey,
		//% The plaintext to encrypt. TODO: Check this should be block size!
		input [`KEY_SIZE-1:0] plaintext,
		//% The resulting ciphertext after exexting this module
		output reg[`KEY_SIZE-1:0] ciphertext,

		//% Toggle the signal to 1 to start the round encrypt execution. (Must be reset until the cipher finishes)
		input signal_start,
		//% Toggle high signal when the execution is finished and the resulting plaintext are can be read.
		output reg finished,

		//% State only for debug purposes, don't need to be connected
		output [3:0]state_response
    );
	 
	 `include "general_functions.v"

	//% Counter of the state machine
	reg [4:0] state = 0;

	//% First plaintext block
	reg [`BLOCK_SIZE-1:0] p0;
	//% Second plaintext block
	reg [`BLOCK_SIZE-1:0] p1;

	//% Increments the state of the state machine.
	//% If the maximum number of states is reached reset to 0.
	task inc_counter;
		begin
			if(state < `MAX_STATE)
				state = state + 1;
			else
				state = 0;
		end
	 endtask

	 initial begin
		state <= 0;
		finished <= 0;
	 end
	 
	 
	 always @ (posedge clk) begin

		 case(state)
			//% Wait for synchronization signal to start the round function
			`WAIT_FOR_START_ENCRYPT: begin
				if(signal_start == 1)
					inc_counter();
				finished <= 0;
			end

		 	//% Assign the measurment to variables (TODO: during production this should be done in the WAIT_FOR_START phase=
			`ASSIGNMENT_ENCRYPT: begin
				p0 <= plaintext[`BLOCK_SIZE-1:0];
				p1 <= plaintext[`KEY_SIZE-1:`BLOCK_SIZE];
				inc_counter();
			end

			 //% Shift p0 to the right (typically 8 bit)
			`SHIFT_ENCRYPT: begin
				p0 <= shift_right(p0,SHIFT_WIDTH_P0);
				inc_counter();
			end

		 	//% Calculate binary addition of p0 and p1
			`ADDITION_ENCRYPT: begin
				p0 <= p0 + p1;
				inc_counter();
			end

			 //% Calculate XOR with subkey of p0
			`XOR_SUBKEY_SHIFT_P0_ENCRYPT: begin
				p1 <= shift_left(p1,SHIFT_WIDTH_P1);
				p0 <= p0 ^ subkey;
				inc_counter();
			end

			 //% Calculate XOR p0 and p1 and assign it to p1
			`XOR_P0_P1_ENCRYPT: begin
				p1 <= p0 ^ p1;
				inc_counter();
			end

		 	//% Assign result to ciphertext varialbe (TODO: during production this should be merged with previous state)
			`RESULT_ASSIGNMENT_ENCRYPT: begin
				ciphertext[`BLOCK_SIZE-1:0] <= p0;
				ciphertext [`KEY_SIZE -1:`BLOCK_SIZE] <= p1;
				finished <= 1;
				inc_counter();
			end
		endcase
	 end
	// Assign state to state response for debug purposes
	assign state_response = state;
endmodule
// @}