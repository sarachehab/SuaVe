rm -rf obj_dir
rm -f hazard_unit_tb.vcd

verilator -Wall --cc --trace cpu.sv --exe hazard_unit_tb.cpp

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu