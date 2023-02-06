`timescale 1ns / 1ps

//% \addtogroup test_bench Test Benches
//% @brief Contains all test benches indicated by file names starting with tb_*
//% @{
module tb_key_schedule(
    );

	reg clk;
	reg signal_start;
	reg [127:0] key;
	wire [127:0] outKey;
	wire [3:0]state;
	wire finished;

	key_schedule key_schedule(.clk(clk), .signal_start(signal_start), .finished(finished), .key(key), .outKey(outKey), .state_response(state));
	//key_schedule_decrypt key_schedule(.clk(clk), .signal_start(signal_start), .finished(finished), .key(key), .outKey(outKey), .state_response(state));
	
	
	initial begin
		clk <= 0;
		signal_start <= 0;
		//key <= 128'h1111111111111119bababababababab2;
		key <= 128'habababababababababababababababab;
		#10
		signal_start <= 1;
		#10
		signal_start <= 0;
		#200
		$stop;
		
	end
	
	initial begin
		forever #5 clk = ~clk;
	end

endmodule
//% @}