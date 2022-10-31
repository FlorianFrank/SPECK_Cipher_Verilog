//`ifndef _general_functions_
//`define _general_functions_

`include "../defines/cipher_settings.vh"

//% Shift right and attach overflowing bits on the left side of the buffer.
function automatic [`BLOCK_SIZE-1:0] shift_right;
    input [`BLOCK_SIZE-1:0] in;
    input [4:0] shiftwidth;
    begin
        shift_right = (in >>> shiftwidth) | (in <<< (`BLOCK_SIZE-1 - shiftwidth));
    end
endfunction

//% Shift left and attach overflowing bits on the right side of the buffer.
function automatic [`BLOCK_SIZE-1:0] shift_left;
    input [`BLOCK_SIZE-1:0] in;
    input [4:0] shiftwidth;
    begin
        shift_left = (in <<< shiftwidth) | (in >>> (`BLOCK_SIZE - shiftwidth));
    end
endfunction
//`endif //_general_functions_