`timescale 1ns / 1ps

`include "../defines/cipher_settings.vh"
`include "../defines/key_schedule_defines.vh"

//% \addtogroup key_schedule Key Schedule
//% @brief Key schedule algorithm which generates new subkeys k0 and k1 of an input key.
//% @{
//% Implementing the key schedule scheme to calculate the subkeys k0 and k1
module key_schedule(
	//% Input clock running the state machine
	input wire clk,

	//% Key of size KEY_SIZE split in two blocks and assigned to k0 and k1
	input wire [`KEY_SIZE-1:0] key,
	//% Output key of size KEY_SIZE returned after executing the algorithm
	output reg [`KEY_SIZE-1:0] outKey,

	//% Key counter which is XORed to k0 in each iteration
	input wire [`BLOCK_SIZE-1:0] round_ctr,

	//% Toggle the signal to 1 to start the key schedule execution. (Must be reset until the cipher finishes)
	input wire signal_start,
	//% Toggle high signal when the execution is finished and the subkeys are can be read.
	output reg finished,

	//% State only for debug purposes, don't need to be connected
	output wire [3:0] state_response
    );

	//% Counter of the state machine
	 reg [3:0] state;
	//% First block of the subkey
	reg [`BLOCK_SIZE-1:0] k0;
	//% Second block of the subkey
	reg [`BLOCK_SIZE-1:0] k1;

	 initial begin
		state <= 0;
		finished <= 0;
	 end

	//% Increments the state of the state machine.
	//% If the maximum number of states is reached reset to 0.
	 task inc_state; begin
		if(state < maxNrStates)
			state <= state + 1;
		else
			state <= 0;
	 	end
	 endtask

	//% Shift right and attach overflowing bits on the left side of the buffer.
	 function automatic [`BLOCK_SIZE-1:0] shift_right;
		 input [`BLOCK_SIZE-1:0] in;
		 input [4:0] shiftwidth;
		 begin
			shift_right = (in >>> shiftwidth) | (in <<< (`BLOCK_SIZE-1 - shiftwidth));
		 end
	 endfunction

	//% Shift left and attach overflowing bits on the right side of the buffer.
	 function automatic [`BLOCK_SIZE-1:0] shift_left;
		 input [`BLOCK_SIZE-1:0] in;
		 input [4:0] shiftwidth;
		 begin
			shift_left = (in <<< shiftwidth) | (in >>> (`BLOCK_SIZE - shiftwidth));
		 end
	 endfunction
	 
	// State machine implementing the key schedule
	always @ (posedge clk) begin

		case (state)

			// Wait for start signal used for synchronization purposes
			WAIT_FOR_START: begin
				if(signal_start)
					inc_state();
				finished <= 0;
			end

			// Assign subkeys to variables (for debug purposes, TODO: should later be removed for debug purposes)
			ASSIGNMENT: begin
				k0 <= key[63:0];
				k1 <= key[127:64];
				inc_state();
			end

			// First step of the pipleline shifts k0 to right by `SHIFT_RIGHT_SIZE (typically 8 bit)
			SHIFT_k1: begin
				k0 <= shift_right(k0, `SHIFT_RIGHT_SIZE);
				inc_state();
			end

			// Execute binary addition of the two subkeys
			ADD_K0_K1: begin
				k0 <= k0 + k1;
				inc_state();
			end

			// Left shift operation and XOR with round counter can be executed simultanously
			SHIFT_K0_XOR_P2: begin
				k1 <= shift_left(k1, `SHIFT_LEFT_SIZE);
				k0 <= k0 ^ round_ctr;
				inc_state();
			end

			// Execute XOR operation of the two subkeys
			XOR_k1_k2: begin
				k1 <= k0 ^ k1;
				inc_state();
			end

			// Assign results to k0 and k1 (TODO: can be merged with previous state in production code)
			ASSIGN_RESULTS: begin
				outKey[`BLOCK_SIZE-1:0] <= k0;
				outKey[`KEY_SIZE-1:`BLOCK_SIZE] <= k1;
				inc_state();
				finished <= 1;
			end
		endcase
	end
	// Assign state to state response for debug purposes
	assign state_response = state;
endmodule
