`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/12/2023 08:54:46 AM
// Design Name: 
// Module Name: tb_decryption
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`define KEYSIZE             128
`define CIPHERTEXT_SIZE     128
`define BLOCK_SIZE           64
`define NR_ROUNDS             2

module tb_decryption();

    reg clk;
    reg start;
    wire active;
    wire ready;

    reg [`CIPHERTEXT_SIZE-1:0]ciphertext;
    reg [`KEYSIZE-1:0]key;
    wire [`CIPHERTEXT_SIZE-1:0] plaintext;


    initial begin
        clk <= 0;
        start <= 0;
        ciphertext  <= `CIPHERTEXT_SIZE'hff2d4b6150645364353678214125442a; //`CIPHERTEXT_SIZE'b01011001001010000000100000101000101110001101100011010000010000000011111110000110001011001111010100101011010011100010111001100111;
        
        key= `KEYSIZE'b01000111001011010100101101100001010100000110010001010011011001110111010100110111011110000010000101000001001001010100010000101010;
        #5
        start <= 1;
        #10
        start <= 0;
        #1000
        $stop;
    end

    initial begin
        forever #1 clk = ~ clk;
    end

    decrypt_ECB #(
    .KEY_SIZE(`KEYSIZE),
    .BLOCK_SIZE(`BLOCK_SIZE),
    .NR_ROUNDS(`NR_ROUNDS)
    )  decryption_module (
    //% Input clock driving the cipher
    .clk(clk),
    .start(start),
    .ciphertext(ciphertext),
    .key(key),
    .plaintext(plaintext),
    .active(active),
    .ready(ready)
    );

endmodule
