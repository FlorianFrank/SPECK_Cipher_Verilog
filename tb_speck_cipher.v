`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:57:07 04/03/2022 
// Design Name: 
// Module Name:    tb_speck_cipher 
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
module tb_speck_cipher(
    );
	 
	 //////////////////////////////////////////////////////////////////////////////////

	 
	 reg [127:0]key = 128'h753778214125442A472D4B6150645367;
	 //reg [127:0]plaintext = 128'hFF00FF00FF00FF00FF00FF00FF00FF00;
	 reg [127:0]plaintext = 128'he5b2862a6a7d27f3cf1688b3fbc40c13;
	 wire [127:0]ciphertext;
	 reg clk = 0;
	 reg start = 0;
	 wire finished;
	 wire [4:0]state;
	 
	 
	cipher_control_module speck_cipher(.clk(clk), .key(key), .plaintext(plaintext), .ciphertext(ciphertext), .start(start), .finished(finished), .state_response(state));	
	
	initial begin
		start <= 1;
		#5
		start <= 0;
		#800
		$stop;
	end

	initial begin 
		forever #5 clk = ~clk;
	 end
	 
	

endmodule
