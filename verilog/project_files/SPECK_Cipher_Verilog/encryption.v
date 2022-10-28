`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:08 06/30/2022 
// Design Name: 
// Module Name:    encryption 
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
module encryption(
    );
	 
	 genvar i;
	 reg clk =0;
	 reg[3:0] signal_start_round;
	 wire[2: 0] finished_round;
	 reg [127:0] subkey [3:0];
	 wire [127:0] plainText [2:0];
	 reg [127:0] plainText_init;
	 wire [3:0] stateResponse [2:0];
	 
	generate 
	for (i = 0; i < 3; i = i + 1) begin: gen_loop
		if(i == 0) 
		round_encrypt round_function(.clk(clk), .signal_start(signal_start_round[i]), .finished(finished_round[i]), 
											  .state_response(stateResponse[i]), .subkey(subkey[i][63:32]), .plaintext(plainText_init), .ciphertext(plainText[i]));
		else
		round_encrypt round_function(.clk(clk), .signal_start(signal_start_round[i]), .finished(finished_round[i]), 
											  .state_response(stateResponse[i]), .subkey(subkey[i][63:32]), .plaintext(plainText[i-1]), .ciphertext(plainText[i]));
	end
	endgenerate

	integer pos_ctr = 0;

	always @ (posedge clk) begin
		if(pos_ctr < 3) begin
			if(finished_round[pos_ctr] == 1) begin
				signal_start_round[pos_ctr+1] = 1;
				pos_ctr = pos_ctr + 1;
				if(pos_ctr > 0)
					signal_start_round[pos_ctr - 1] = 0;
			end
		end
	end
	
	integer ctr = 0;
	
	initial begin 
		signal_start_round <= 1;
		plainText_init <= 128'hababababababababababababab;
		for (ctr = 0; ctr < 4; ctr = ctr + 1) begin
			subkey[ctr] <= 128'h0;
		end
		#200
		$stop;
	end
	
	initial begin
		forever #5 clk = ~clk;
	end


endmodule
