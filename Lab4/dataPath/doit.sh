#!/bin/sh

rm -rf obj_dir
rm -f dataPath.vcd

verilator -Wall --cc --trace dataPath.sv --exe dataPath_tb.cpp
 
make -j -C obj_dir/ -f VdataPath.mk VdataPath

obj_dir/VdataPath

