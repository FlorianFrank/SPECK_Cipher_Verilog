`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: University of Passau
// Engineer: Florian Frank
// 
// Create Date:    18:22:09 04/02/2022 
// Design Name: 
// Module Name:    tb_cipher 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Testbench to test a single round of the SPECK cipher.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module tb_round_function_encrypt_one_round(
    );
	 
	 reg clk; 
	 
	 reg signal_start;
	 reg [63:0] subkey;
	 reg [127:0]plaintext =   128'habababababababababababababababab;
	 //reg [127:0]plaintext = 128'h0a0a0a0a0a0a0a0b5757575757575756;
	 wire [127:0] ciphertext;
	 wire finished;

	wire [3:0]state;
	 
	 //round_encrypt round1(.clk(clk), .signal_start(signal_start), .subkey(subkey), .plaintext(plaintext), .ciphertext(ciphertext), .finished(finished), .state_response(state));
	 round_decrypt round1(.clk(clk), .signal_start(signal_start), .subkey(subkey), .plaintext(ciphertext), .ciphertext(plaintext), .finished(finished), .state_response(state));

	 
	 initial begin
			subkey <= 64'h244226452948404D;
			//subkey <= 0;
			signal_start <= 0;
			clk <= 0;
			#5
			signal_start <= 1;
			#10 
			signal_start <= 0;
			#100
			$stop;
		end
		
		initial begin
				forever #5 clk <= ~clk;
		end
		
		


endmodule
