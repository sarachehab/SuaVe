rm -rf obj_dir
rm -f cpu_run_reference.vcd

verilator -Wall --cc --trace cpu.sv --exe cpu_run_reference.cpp

make -j -C obj_dir/ -f Vcpu_run_reference.mk Vcpu_run_reference

obj_dir/Vcpu_run_reference