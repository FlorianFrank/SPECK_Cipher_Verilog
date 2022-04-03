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
module Test_bench(
    );

	 function automatic [63:0] shift_right;
		 input [63:0] in;
		 input integer shiftwidth;
		 begin
			shift_right = (in >>> shiftwidth) | (in <<< (64 - shiftwidth));
		 end
	 endfunction;

integer value = 32'h00FFFFFFFFFF;

initial begin
#10
value <= shift_right(value, 8);
#200
$stop;
end


endmodule
