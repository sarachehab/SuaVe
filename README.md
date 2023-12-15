# Team14 - Team Write-Up

## Overview

We were asked to design a RISC-V CPU based on its ISA for our Instruction Architecture and Compilers course (IAC). It was an incredibly rewarding experience with great learning opportunities.

We were able to deliver in the span of three weeks:
- A Single Cycle CPU, [see branch main](https://github.com/luju1108/Team14/tree/main)
- A Pipelined 5-stages CPU, [see branch proj-pipeline](https://github.com/luju1108/Team14/tree/proj-pipeline)
- A 5-stages Pipelined CPU with direct-mapped cache, [see branch proj-direct_cache](https://github.com/luju1108/Team14/tree/proj-direct_cache)
- A Single Cycle CPU with fully-associative cache, [see branch proj-cache](https://github.com/luju1108/Team14/tree/proj-cache)

Logic was also derived to implement a 4-way associative cache. System-Verilog draft of the code was submitted along this repository, but remains uncomplete.
One could also check the `Project` directory to verify the individual `.sv` files and their respective testbenches.

## Quick Start

`exe.sh` is a Shell script that loads different instructions and data into the processor.

`exe.sh` takes either zero, one or two arguments. These arguments precise the testbench used for the testing, whether it is the Formula Lights or Reference program:

| Command                           | Outcome                                       |
| --------------------------------- | --------------------------------------------- |   
| `source ./exe.sh f1`              | Run Formula Lights Program                    |
| `source ./exe.sh pdf gaussian`    | Run PDF program for gaussian.mem              |
| `source ./exe.sh pdf triangle`    | Run PDF program for triangle.mem              |
| `source ./exe.sh pdf sine`        | Run PDF program for sine.mem                  |
| `source ./exe.sh pdf noisy`       | Run PDF program for noisy.mem                 |

One should first move into the `RTL` directory before typing in Terminal the commands:

``` Shell
cd RTL
```

The Formula Lights program has both a `RESET` and `TRIGGER`:
- `RESET` can be controlled by toggling Vbuddy's push-button
- `TRIGGER` is controlled via the rotary encoder: any value greater than 50 makes `Trigger` `HIGH`

To restart the counting sequence, one would have to toggle the push-button, then set the rotary encoder to some value greater than 50.

> Our trigger is wired directly to register S3. Please be mindful of this if testing with your own program.


## Proof of Successs

| PDF   	| Output    												| Expected Output   											|
| ----- 	| --------------------------------------------------------- | ------------------------------------------------------------- |
| Gaussian 	| ![Gaussian Obtained](images/obtained_graphs/gaussian.png)	| ![Gaussian Expected](images/expected_graphs/PDF_Gaussian.png) |
| Sine		| ![Gaussian Obtained](images/obtained_graphs/sine.png)		| ![Sine Expected](images/expected_graphs/PDF_Sine.png)			|
| Triangle	| ![Gaussian Obtained](images/obtained_graphs/triangle.png)	| ![Triangle Expected](images/expected_graphs/PDF_Triangle.png)	|
| Noisy		| ![Gaussian Obtained](images/obtained_graphs/noisy.png)	| ![Noisy Expected](images/expected_graphs/PDF_Noisy.png)		|


Single Cycle CPU:
- [Formula Lights](https://youtu.be/zJto4plLvCE)
- [PDF Gaussian](https://youtu.be/Mq9BEwbvduk)
- [PDF Noisy](https://youtu.be/FlwG2JfLp6k)
- [PDF Sine](https://youtu.be/67-TDc_EGnA)
- [PDF Triangle](https://youtu.be/VC7Lewtsuus)



Pipelined CPU:
- [Formula Lights](https://youtu.be/59yWMzJzut0)
- [PDF Gaussian](https://youtu.be/r62WZPJNDN0)
- [PDF Noisy](https://youtu.be/OM9mQih1nxs)
- [PDF Sine](https://youtu.be/j93-G7-LUJU)
- [PDF Triangle](https://youtu.be/5SQwBv_uGIY)


Cache
- [Formula Lights](https://youtu.be/0z1GHnXMrG4)


## Specifications

| Property                  | Value             |
| ------------------------- | ------------------|
| Instruction Memory Size   | 2^12 bits         |
| Instruction Width         | 32-bit            |
| Data Memory Size          | 2^17 bit          |
| Data Width                | 8-bit             |
| Data Cache Size           | 256 bits          |
| Data Cache Sets           | 8                 |
| Data Cache Ways           | 1                 |
| Data Cache Block Size     | 4 * 8-bit         |


## Implemented Instructions

| Type  | Implemented Instructions  |
| ----- | ------------------------- |
| `R`   |`ADD`, `SUB`, `SLL`, `SLT`, `SLTU`, `XOR`, `SRL`, `SRA`, `OR`, `AND`|
| `I`   |`ADDI`, `SLLI`, `SLTI`, `XORI`, `SRLI`, `SRAI`, `ORI`, `ANDI`, `LBU`, `LW`, `JALR`|
| `B`   |`BNE`|
| `S`   |`SW`, `SB`|
| `U`   |`LUI`|
| `J`   |`JAL`|


## Task Division

|               |                               | Sara Chehab (sarachehab)  | Utsav Goel (utsav254)  | Lu Ju (luju1108)  | Neil Radhul (Nr722)   |
| ------------  | ----------------------------- | ------------------------- | --------------------- | ----------------- | --------------------- |
| General       | [Top Testbenches](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/RTL/README_TB.md)               |                           |                       | X                 |                       |
|               | [Subfile Testbenches](https://github.com/luju1108/Team14/blob/28aca030e19683a80f4b11a7acd2ce07016c9c47/project/README.md)           | X                         | X                     | C                 | C                     |
|               | [Shell Script](https://github.com/luju1108/Team14/blob/e65a53d7a445a3cb1e7aad7f46a14a1d61f4cc61/project/shellscript/README.md)                  | X                         |                       |                   |                       |
|               | [F1 Assembly](https://github.com/luju1108/Team14/blob/2a4b3dcd5017c353cd38f80eed93257bd0df520e/RTL/README_F1.md)                   | X                         | X                     |                   |                       |
| Single Cycle  | [Program Counter](https://github.com/luju1108/Team14/blob/619bc370df1e0f67b9346f580a0427788a3eefdc/project/pc/README.md)               | X                         |                       |                   |                       |
|               | [Main Decoder](https://github.com/luju1108/Team14/blob/932f2b59b5991a43ee315cc2252fe5ef0e29b232/project/controlUnit/main_decoder/README.md)                  | X                         | X                     |                   |                       |
|               | [Alu Decoder](https://github.com/luju1108/Team14/blob/8f50ebc4604ea159b399a6d839607decfdb7587c/project/controlUnit/alu_decoder/README.md)                   |                           |                       |                   | X                     |
|               | [Control Unit](https://github.com/luju1108/Team14/blob/aa07c74d3221423a55203b9158bd58d9a7771146/project/controlUnit/README.md)                  |                           |                       | X                 | X                     |
|               | [Register File](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/project/dataPath/registerFile/README.md)                 |                           |                       | X                 |                       |
|               | [ALU](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/project/dataPath/alu/README.md)                           | C                         |                       | X                 |                       | 
|               | [Data Memory](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/project/dataPath/dataMem/README.md)                   | C                         |                       |                   | X                     |
|               | [Datapath](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/project/dataPath/README.md)                      |                           | C                     | X                 |                       |
|               | [Sign Extend](https://github.com/luju1108/Team14/blob/7ec8d3902966c3447d244e9706656bb8a9e96729/project/extend/README.md)                   |                           |                       |                   | X                     |
|               | [Top File](https://github.com/luju1108/Team14/blob/c659b93b228f9a502ee8ece71c8fc4fde6763aae/RTL/README.md)                      | X                         |                       |                   | X                     |
|               | Testing [pdf](https://github.com/luju1108/Team14/blob/55573bf5cd5188fad616eb12a406bb40f62c1772/RTL/README_PDF.md) [F1](https://youtu.be/zJto4plLvCE)                       | X                         | X                     | X                 | X                     |
| Pipeline      | Pipeline Register             | X                         |                       |                   |                       |
|               | [Hazard unit](https://github.com/luju1108/Team14/blob/1ac6203f9dc9e9ce10d48f2375bfcd4949d704cc/RTL/hazard_unit/README.md)                   |                           |                       | X                 |                       |
|               | [Refactoring](https://github.com/luju1108/Team14/blob/98bc1b035346cb44bc519077c4daae0fd198ed2f/RTL/control_unit/README.md)                   | X                         |                       |                   |                       |
|               | [Top File](https://github.com/luju1108/Team14/blob/75df15b7cf9c71874d93c646478f9ac34ed26d3c/RTL/README.md)                      | X                         |                       |                   |                       |
|               | Testing [pdf](https://github.com/luju1108/Team14/blob/98bc1b035346cb44bc519077c4daae0fd198ed2f/RTL/README_PDF.md) [F1](https://youtu.be/59yWMzJzut0)                      | X                         |                       | X                 |                       |
| Cache         | [Direct Mapped Cache](https://github.com/luju1108/Team14/blob/8b3ccd96ebb34cd7653d7cf32361917fc3c27a69/RTL/README.md)           | C                         | X                     |                   | X                     |
|               | RAM Refactor                  |                           | X                     |                   | X                     |
|               | Data Memory                   |                           | X                     |                   | X                     |
|               | [Control Unit Refactor](https://github.com/luju1108/Team14/blob/8b3ccd96ebb34cd7653d7cf32361917fc3c27a69/RTL/control_unit/README.md)         |                           | X                     |                   | X                     |
|               | [Pipelining Refactor](https://github.com/luju1108/Team14/blob/8b3ccd96ebb34cd7653d7cf32361917fc3c27a69/RTL/control_unit/README.md)           | X                         |                       |                   |                       |
|               | Testing                       | X                         | X                     | X                 | X                     |
|               | [Fully Associative Cache](https://github.com/luju1108/Team14/blob/225548581e538b4c2fa1a3339d4283aa37e34ad6/RTL/README.md)       |                           | X                     |                   | X                     |
|               | Testing                       |                           | X                     |                   | X                     |

## Personal Statements
[Lu Ju](https://github.com/luju1108/Team14/blob/6462402a37c0c3c388f4c21d1a5a78ac21a5525d/individual_statements/LuJu.md)
[Sara Chehab](https://github.com/luju1108/Team14/blob/6462402a37c0c3c388f4c21d1a5a78ac21a5525d/individual_statements/SaraChehab.md)
[Utsav Goel](https://github.com/luju1108/Team14/blob/6462402a37c0c3c388f4c21d1a5a78ac21a5525d/individual_statements/UtsavGoel.md)
[Neil Radhul](https://github.com/luju1108/Team14/blob/6462402a37c0c3c388f4c21d1a5a78ac21a5525d/individual_statements/NeilRadhu.md)

## Final Structure at main

```
. 
├── lab4 
├── project 
├── data_memory/ 
│ ├── gaussian.mem 
│ ├── noisy.mem 
│ ├── sine.mem 
│ └── triangle.mem 
├── instruction_memory/ 
│ ├── F1.asm 
│ ├── F1.hex 
│ ├── pdf.hex 
│ └── pdf.s
├── project/ 
│ 	├── pc/ 
│ 	│ ├── doit.sh
│ 	│ ├── pc.sv
│ 	├── pc_tb.cpp 
│ 	├── instruction_memory/
│ 	│ ├── doit.sh
│ 	└── ...
└── RTL/ 
	├── control_unit/ 
	│ ├── main_decoder.sv 
	│ ├── alu_decoder.sv 
	│ └── control_unit_top.sv 
	├── data_path/ 
	│ ├── alu.sv 
	│ ├── datapath.sv 
	│ ├── data_memory.sv 
	│ └── register_file.sv 
	├── extend_unit/ 
	│ └── extend_unit.sv 
	├── instruction_memory/ 
	│ └── instruction_memory.sv 
	├── program_counter/ 
	│ └── pc.sv 
	├── cpu.sv 
	├── data_memory.mem 
	├── instructions.hex 
	├── exe.sh 
	├── f1_tb.cpp 
	├── pdf_tb.cpp 
	├── plot_distribution.py 
	├── vbuddy.cpp 
	└── vbuddy.cfg
```
