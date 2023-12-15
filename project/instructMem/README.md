# Instruction Memory
### Introduction
The instruction memory for this implementation of RISCV is an asynchronous read only memory. The given memory map set the start of the instruction memory to `0xBFC00000` until `0xBFC00FFF`. The RV32I instruction set uses 32 bit instructions but also supports byte addressable memory which means that the input address from the program counter must increment by 4 to access a valid address.

### System Verilog Implementation
```verilog
module instruction_memory #(
    parameter   BYTE_SIZE = 8,
                DATA_WIDTH = 32,
                FIRST_INSTR_ADDR = 32'hBFC00000,
                LAST_INSTR_ADDR  = 32'hBFC00FFF
)
```
This system Verilog implementation has one input `(addr_i)` which refers to the read address and one output `(instr_o)` which is the instruction stored in the relevant address.
```verilog
(
    input  logic [DATA_WIDTH-1:0] addr_i,
    output logic [DATA_WIDTH-1:0] instr_o
);
```
Below, the rom array is defined where each element is byte sized (8 bits) and has the specified start and end address. This creates an instruction memory of size:

$$Memory Size=(0xBFC00FFF−0xBFC00000)+1 = 4096 bytes.$$
```verilog
logic [BYTE_SIZE-1:0] rom [LAST_INSTR_ADDR:FIRST_INSTR_ADDR];
```
Instruction memory is initialised with a hex file using the `$readmemh` function. This file must be formatted correctly to ensure that it is interpreted correctly (this is shown below).
```verilog
initial begin
    $display("Loading rom.");
    $readmemh("instructions.hex", rom);
    $display("Program written to ROM successfully");
end;
```
The input address is bitwise and-ed with `0xFFFFFFFC`. This is done to ensure that the input address is a multiple of four. This instruction essentially makes the least two significant bits of the input address a don’t care to ensure that we output a valid instruction.
```verilog
logic [DATA_WIDTH-1:0] addr = addr_i & 32'hFFFFFFFC;
```
The instruction can be output by assigning `instr_o` to the values held in the rom array. The instruction must be assembled using System Verilog’s bit concatenation feature to amass the correct 4 bytes into a valid RV32I instruction.
```verilog
assign instr_o = {rom[addr+32'd0], rom[addr+32'd1], rom[addr+32'd2], rom[addr+32'd3]};
endmodule
```
To test this module, it is possible to drive the input addr_i with random address values and track whether a valid output is produced. For testing purposes, the instruction memory is initialised with the following contents:
```hex
0f f0 03 13 <-start address
00 00 05 13 <----+4
00 00 05 93 <----+8
00 05 85 13      ...
00 15 85 93      ...
fe 65 9c e3      ...
fe 03 18 e3 <----+24
```
With these we can observe the wave form:
![Instruction Memory Waveform](../../images/imagesUtsav/Instruction_memory_waveform.png)
The first input address is `0xBFC0000D` which is start `FIRST_INSTR_ADDR + 13`. This is not a multiple of 4 but we expect that this returns the instruction stored in `FIRST_INSTR_ADDR + 12`. We observe that we get the expected `13 85 05 00`. For the next address we do have a multiple of four and we can observe that the correct output instruction is produced.
