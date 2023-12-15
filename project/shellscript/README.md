# Shell Script

`exe.sh` is a Shell script that loads different instructions and data into the processor.

`exe.sh` takes either zero, one or two arguments. These arguments precise the testbench used for the testing, whether it is the Formula Lights or Reference program:

| Command | Outcome |
| ----- | ----|
| `source ./exe.sh f1` | Run Formula Lights Program |
| `source ./exe.sh pdf gaussian` | Run PDF program for gaussian.mem |
| `source ./exe.sh pdf triangle` | Run PDF program for triangle.mem |
| `source ./exe.sh pdf sine` | Run PDF program for sine.mem |
| `source ./exe.sh pdf noisy` | Run PDF program for noisy.mem |

The following Shell snippet for the case with one arguments for `testbench` accurately describes the overall logic of our script:

1. Ensure only one argument is passed
2. Ensure argument format is accepted
3. Ensure `instruction_memory` directory exists
4. Ensure `pdf.hex `instructions exist
5. Copy `pdf.hex` into current directory under the name `instructions.hex`

``` Shell
elif [ $# -eq 1 ] && [ "$1" = "pdf" ]; then
    if [ -d ../instruction_memory ]; then
        if [ -f ../instruction_memory/pdf.hex ]; then
            echo "Copying pdf.hex into current directory as instructions.hex"
            rm -f instructions.hex
            cp ../instruction_memory/pdf.hex instructions.hex
            testbench="pdf_tb.cpp"
        else
            echo "pdf.hex does not exist in the instruction_memory folder"
            exit 1
        fi
    else
        echo "instruction_memory folder does not exist"
        exit 1
    fi
```

The rest of the Shell Script strongly resembles the ones we have written for previous labs:
1. Deletion of` obj-dir` and `.vcd` files
2. Verilator Compilation, linked to the testbench passed in argument through `--exe "$testbench"`
3. Making of executable file `Vcpu'
4. Execution of the Compiled Verilog Simulation

A Python program is further down linked to the Shell Script to plot the PDF obtained through the reference code if `testbench = pdf`.

``` Shell
if [ "$testbench" = "pdf_tb.cpp" ]; then
    python plot_distribution.py "$distribution"
fi
```


Naturally, the SystemVerilog programs for `InstructionMemory` and `DataMemory` had to be modified to now load the instructions and memory contents chosen through the Shell Script. 

``` Shell
$readmemh("instructions.hex", rom); #for InstructionMemory
```


A rigid structure for the main repository had to be created to avoid last-minute changes to `exe.sh`:

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
