`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:20:59 04/03/2022 
// Design Name: 
// Module Name:    Test_bench 
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
module testbench();

genvar i;
integer init_val = 0;
wire[31:0] out_reg[9:0];
reg[9:0] trigger = 0;
reg clk = 0;

generate 
	for (i = 0; i < 10; i = i + 1) begin: gen_loop
		if(i == 0)
			Test t(trigger[0],init_val, out_reg[0]);
		else begin
				Test t(trigger[i], out_reg[i-1], out_reg[i]);
		end
	end
endgenerate

initial begin
#100
$stop;
end

integer ctr = 0;

always @ (posedge clk) begin
	trigger[ctr] = 1;
	ctr = ctr + 1;
end

initial begin
	forever #5 clk = ~clk;
end

endmodule
