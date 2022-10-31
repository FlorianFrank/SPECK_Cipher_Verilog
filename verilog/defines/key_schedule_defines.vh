//`ifndef _key_schedule_defines_
`define _key_schedule_defines_

`define SHIFT_RIGHT_SIZE    5'd8
`define SHIFT_LEFT_SIZE     5'd3

`define MAX_NR_STATES       6
`define WAIT_FOR_START      0
`define ASSIGNMENT          1
`define SHIFT_K1            2
`define ADD_K0_K1           3
`define SHIFT_K0_XOR_P2     4
`define XOR_K1_K2           5
`define ASSIGN_RESULTS      6

//`endif //_key_schedule_defines_
