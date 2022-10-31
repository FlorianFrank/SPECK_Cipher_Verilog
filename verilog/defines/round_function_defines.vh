`ifndef _key_schedule_defines_
`define _key_schedule_defines_


`define MAX_STATE                   6

`define SHIFT_WIDTH_P0              8
`define SHIFT_WIDTH_P1              3

/** ENCRYPTION **/
`define WAIT_FOR_START_ENCRYPT      0
`define ASSIGNMENT_ENCRYPT          1
`define  SHIFT_ENCRYPT              2
`define ADDITION_ENCRYPT            3
`define XOR_SUBKEY_SHIFT_P0_ENCRYPT 4
`define XOR_P0_P1_ENCRYPT           5
`define RESULT_ASSIGNMENT_ENCRYPT   6

/** DECRYPTION **/
`define WAIT_FOR_START_DECRYPT      0
`define ASSIGNMENT_DECRYPT          1
`define XOR_C0_C1_DECRYPT           2
`define XOR_SUBKEY_SHIFT_C0_DECRYPT 3
`define ADDITION_DECRYPT            4
`define SHIFT_DECRYPT               5
`define RESULT_ASSIGNMENT_DECRYPT   6


`endif //_key_schedule_defines_