`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:22:09 04/02/2022 
// Design Name: 
// Module Name:    tb_cipher 
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
module tb_round_function(
    );
	 
	 reg clk; 
	 
	 reg signal_start;
	 	 reg signal_start2;
	 reg [63:0] subkey;
	 reg [127:0] plaintext;
	 wire [127:0] plaintext2;
	 wire [127:0] ciphertext;
	 wire finished;
	 wire finished2;

	wire [3:0]state;
	wire [3:0]state2;
	 
	 round round1(.clk(clk), .signal_start(signal_start), .subkey(subkey), .plaintext(plaintext), .ciphertext(ciphertext), .finished(finished), .state_response(state));
	 round round2(.clk(clk), .signal_start(signal_start2), .subkey(subkey), .plaintext(ciphertext), .ciphertext(plaintext2), .finished(finished2), .state_response(state2));
	 
	 initial begin
			plaintext <= 128'h753778214125442A472D4B6150645367;
			subkey <= 64'h244226452948404D;
			signal_start <= 0;
			signal_start2 <= 0;
			clk <= 0;
			#5
			signal_start <= 1;
			#10 
			signal_start <= 0;
			#100
			signal_start2 <= 1;
			#10 
			signal_start2 <= 0;
			#1000
			$stop;
		end
		
		initial begin
				forever #5 clk <= ~clk;
		end
		
		


endmodule
