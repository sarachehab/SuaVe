rm -rf obj_dir
rm -f cpu_run_F1.vcd

verilator -Wall --cc --trace cpu.sv --exe cpu_run_F1.cpp

make -j -C obj_dir/ -f Vcpu.mk Vcpu

obj_dir/Vcpu