rm -rf obj_dir
rm -f cache.vcd

clear

verilator -Wall --cc --trace cachev2.sv --exe cache_tb.cpp

make -j -C obj_dir/ -f Vcachev2.mk Vcachev2

echo -e "\nrunning testbench\n"
obj_dir/Vcachev2
echo -e "\nending testbench\n"
