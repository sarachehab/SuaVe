#!/bin/sh

#cleanup
rm -rf obj_dir
rm -f register_file.vcd

#run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace register_file.sv --exe register_file_tb.cpp

#build c++ project via make autormatically generated by Verilator
make -j -C obj_dir/ -f Vregister_file.mk Vregister_file

#run executable simulation file
obj_dir/Vregister_file