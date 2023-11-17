#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f signextend.vcd

#run verilator to translate verilog into c++, including c++ testbench
verilator -Wall --cc --trace signextend.sv --exe signextend_tb.cpp

#build c++ porject viamake automatically generated by verilator 
make -j -C obj_dir/ -f Vsignextend.mk Vsignextend

#run executable simulation file 
echo -e "\nrunning simulation\n"
obj_dir/Vsignextend
echo -e "\\ncomplete simulation\n"
