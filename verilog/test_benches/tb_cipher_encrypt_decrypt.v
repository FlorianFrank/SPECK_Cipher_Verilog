`timescale 1ns / 1ps

module tb_round_function_encrypt_decrypt(
    );
	 
	 reg clk; 
	 
	 reg signal_start_encrypt;
	 reg signal_start_decrypt;
	 reg [63:0] subkey;
	 reg [127:0] plaintext;
	 wire [127:0] plaintext2;
	 wire [127:0] ciphertext;
	 wire finished_encrypt;
	 wire finished_decrypt;

	wire [3:0]state_encrypt;
	wire [3:0]state_decrypt;
	 
	 round_encrypt round1(.clk(clk), .signal_start(signal_start_encrypt), .subkey(subkey), .plaintext(plaintext), 
								 .ciphertext(ciphertext), .finished(finished_encrypt), .state_response(state_encrypt));
	 
	 round_decrypt round2(.clk(clk), .signal_start(signal_start_decrypt), .subkey(subkey), .plaintext(plaintext2), 
							    .ciphertext(ciphertext), .finished(finished_decrypt), .state_response(state_decrypt));
	 
	 initial begin
			plaintext <= 128'hab17_0837_7ebc_4ca4_0617_26e2_fcc6_b383 ;
			subkey <= 64'h2442_2645_2948_404D;
			signal_start_encrypt <= 0;
			signal_start_decrypt <= 0;
			clk <= 0;
			
			signal_start_encrypt <= 1;
			#10 
			signal_start_encrypt <= 0;
			#50
			signal_start_decrypt <= 1;
			#10 
			signal_start_decrypt <= 0;
			#60
			$stop;
		end
		
		initial begin
				forever #5 clk <= ~clk;
		end
		
endmodule
