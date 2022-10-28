`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:16 06/30/2022 
// Design Name: 
// Module Name:    Simple_Adder 
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
module Test(
input wire trigger,
input wire[31:0] in = 0,
output reg[31:0] out
    );


always @ (posedge trigger)
	out <= in + 1;

endmodule
