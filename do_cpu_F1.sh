rm -rf obj_dir
rm -f cpu_run_F1.vcd

verilator -Wall --cc --trace cpu.sv --exe cpu_run_F1.cpp

make -j -C obj_dir/ -f Vcpu_run_F1.mk Vcpu_run_F1

obj_dir/Vcpu_run_F1