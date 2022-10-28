`ifndef _key_schedule_defines_
`define _key_schedule_defines_

`define SHIFT_RIGHT_SIZE 5'd8
`define SHIFT_LEFT_SIZE 5'd3


localparam widthshift_k0 = 3;
localparam widthshift_k1 = 8;
localparam shiftwidth_p0 = 8;
localparam shiftwidth_p1 = 3;

localparam maxNrStates = 6;
parameter WAIT_FOR_START = 0;
parameter ASSIGNMENT = 1;
parameter SHIFT_k1 = 2;
parameter ADD_K0_K1 = 3;
parameter SHIFT_K0_XOR_P2 = 4;
parameter XOR_k1_k2 = 5;
parameter ASSIGN_RESULTS = 6;

`endif //_key_schedule_defines_
