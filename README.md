# Speck Cipher Veriog implementation

This repository contains a sample implementation of the SPECK64/128 cipher. 
See [Reference](https://csrc.nist.gov/csrc/media/events/lightweight-cryptography-workshop-2015/documents/papers/session1-shors-paper.pdf).

The cipher is using only ARX (Addition, Rotation and XOR) operations, which can be implemented fast in hardware as well as fast in hardware. 
The cipher can be implemented using two repeated blocks, the key schedule as well as the round function.
Like visualized in the figure below.

![Structure](documentation/figures/SPECKStructure.svg)

The verilog implementation follows this scheme and is subdivided into three verilog modules. 

### Round function

The round function is implemented as a state machine. 
In the first state, the plaintext is subdivided into two 64-bit blocks. 
In the next state, a bitwise + operation between p0 and p1 is calculated followed by a xor with subkey k0 on p1 
and a left shift operation of p0. In the last step an XOR operation between p0 and p1 is executed and 
a finished signal indicates that the round was executed. All states are triggered by an input clock.

```verilog
module round(
		input clk,
		input signal_start,
		input [64:0] subkey,
		input [127:0] plaintext,
		output reg[127:0] ciphertext,
		output reg finished,
		output [3:0]state_response
    );
```

