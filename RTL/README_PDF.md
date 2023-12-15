## Pipeline_pdf_test

The pipelined cpu is tested against the given reference program in generating the pdf plots of data values Guassian, Noisy, Triangle and Sine, the same results and graphs are obtained as of stimulated in the correct single cycle cpu. 

### Modification to the testbench
The 2 versions of the testbench, one with use of Vbuddy, one without, are mostly the same as the testbenches for the single cycle cpu apart from the modulated number of cycle for the output is to be changed from 3 to 5 as of the following:

``` C++
if (cntReading % 5 == 2)
{
    pdfFile << top->a0 << "\n";
    pdf_values.push_back(top->a0); // used for plotting on Vbuddy
}
```

Above implies that for every 5 cycle, a reading is taken.

``` C++
if (cntReading > 256 * 5)
    break;
```

For the above, there are 256 numbers in a byte in total, by which it is to be plotted, and each reading takes 5 cycles, so after 256 * 5 cycles, the reading is completed.

### Reason behind the modification
The reason why it takes 5 cycles instead of 3 as of before is due to the pipeline.

It takes 3 cycles because in the reference program, the loop to read the values and output it into a0 contains 3 instructions: 

``` 
    LI      a0, -1              # output to testbench - start display
_loop3:                         # repeat
    LBU     a0, base_pdf(a1)    # Instruct: 1005c503, a0 = mem[base_pdf+a1)
    addi    a1, a1, 1           # Instruct: 00158593, incr 
    BNE     a1, a2, _loop3      # Instruct: fec59ce3, until end of pdf array
```

```
bfc0005c:	0ff00613          	addi	a2,zero,255

bfc00060 <_loop3> (File Offset: 0x1060):
_loop3():
bfc00060:	1005c503          	lbu	a0,256(a1) # 10100 <base_data+0x100> (File Offset: 0xffffffff40411100)
bfc00064:	00158593          	addi	a1,a1,1
bfc00068:	fec59ce3          	bne	a1,a2,bfc00060 <_loop3> (File Offset: 0x1060)
bfc0006c:	00008067          	jalr	zero,0(ra)
```

However, as shown below in the diagram, if bne instruction is taken, there is a flush of 2 cycles (the jalr instruction's execute stage flush following by an empty decode stage flush, equivalent of a delay of 2 cycles), hence there are total of 3 + 2 = 5 cycles between the two consecutive updates of the a0. 

![Alt text](images/5cyclespdf.jpg)

This is then further confirmed in viewing the stimulation from the vcd file. Taking the reading at `a0 = mem[0x3D]` as an example:

![Alt text](images/5cyclesSim.png)

As shown by the two markers, it confirms that there are 10 ps = 5 cycles between the two consecutive updates of the a0. 
