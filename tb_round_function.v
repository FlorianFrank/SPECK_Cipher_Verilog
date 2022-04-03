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
	 reg [63:0] subkey;
	 //reg [127:0]plaintext = 128'hFF00FF00FF00FF00FF00FF00FF00FF00;
	 reg [127:0]plaintext =  128'hdbbdd9bad6b7bfb223ba21bd2eb0474d;
	 wire [127:0] ciphertext;
	 wire finished;

	wire [3:0]state;
	 
	 round round1(.clk(clk), .signal_start(signal_start), .subkey(subkey), .plaintext(plaintext), .ciphertext(ciphertext), .finished(finished), .state_response(state));
	 
	 initial begin
			subkey <= 64'h244226452948404D;
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
