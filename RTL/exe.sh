#!/bin/sh

if [ $# -eq 2 ]; then
    parent_dir="../"  # Assuming the parent directory is one level up
    instruction_memory="${parent_dir}instruction_memory"
    data_memory="${parent_dir}data_memory"
    if [ -d "$instruction_memory" ] && [ -d "$data_memory" ]; then
        if [ "$1" = "pdf" ]; then
            if [ -f "$instruction_memory/pdf.hex" ]; then
                echo "Copying pdf.hex into current directory as instructions.hex"
                rm -f instructions.hex
                cp "$instruction_memory/pdf.hex" instructions.hex
                testbench="pdf_tb.cpp"
            else
                echo "pdf.hex does not exist in the instruction_memory folder"
                exit 1
            fi
        fi
        if [ "$2" = "noisy" ] || [ "$2" = "gaussian" ] || [ "$2" = "triangle" ] || [ "$2" = "sine" ]; then
            if [ -f "$data_memory/$2.mem" ]; then
                echo "Copying $2.mem from instruction_memory into current directory as data_memory.mem"
                rm -f data_memory.mem
                cp "$data_memory/$2.mem" data_memory.mem
                distribution="$2"
            else
                echo "$2.mem does not exist in the data_memory folder"
                exit 1
            fi
        else
            echo "Invalid second argument. Should be 'noisy', 'gaussian', 'triangle', or 'sine'"
            exit 1
        fi
    else
        echo "instruction_memory or data_memory folder does not exist in the parent directory"
        exit 1
    fi
elif [ $# -eq 1 ] && [ "$1" = "F1" ]; then
    if [ -d ../instruction_memory ]; then
        if [ -f ../instruction_memory/F1.hex ]; then
            echo "Copying F1.hex into current directory as instructions.hex"
            rm -f instructions.hex
            cp ../instruction_memory/F1.hex instructions.hex
            testbench="f1_tb.cpp"
        else
            echo "F1.hex does not exist in the instruction_memory folder"
            exit 1
        fi
    else
        echo "instruction_memory folder does not exist"
        exit 1
    fi
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
elif [ $# -eq 0 ]; then
    echo "No argument provided"
else
    echo "Incorrect usage of arguments"
    exit 1
fi

if [ -z "$testbench" ]; then
    testbench="pdf"
fi

if [ -z "$distribution" ]; then
    distribution="gaussian"
fi


rm -rf obj_dir
rm -f *.vcd

verilator -Wall --cc --trace cpu.sv -Idatapath -Icontrol_unit -Iextend_unit -Iprogram_counter -Iinstruction_memory -Ipipeline_registers -Ihazard_unit --exe "$testbench"

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu

if [ "$testbench" = "pdf_tb.cpp" ]; then
    python plot_distribution.py "$distribution"
fi
