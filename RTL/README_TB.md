## Top_tb

More details to the F1 testing and the pdf testing results see the following markdown files:
- [F1 testing markdown](link)
- [pdf testing markdown](link)
- [shell script markdown](https://github.com/luju1108/Team14/blob/6bdb7d9b94ac3fe67cde19d325a89a3b5d6d1de3/project/shellscript/README.md)

The two top testbench c++ programs are written in a similar way to the previous labs in the following format:

### In common to both F1 testbench and pdf testbench:
- mandatory header files involving verilated, vcd and module cpu are declared 
- simcyc counts the number of cycles from 0 to maximum to stimulate, tick is used to toggle the clock
- turn on signal tracing and dump the waveform to the relative named vcd file for later debugging 
- setting of the initial signal levels
- looping the simulation 
- toggle the clock and evaluate signal on both edge of the clock
- `vbdCycle(simcyc)` writes the current clock cycle count at the bottom of the Vbuddy display
- when `q` is pressed Vbuddy signal is closed and the program is exited

### Differences of the two testbenches: <br>

#### F1 testbench
- uses Vbuddy, thus relative header files need to declared
- rotary encoder is set to control the stimulation of the lights
- pressing of the encoder:
    - set to one shot by `vbdSetMode(1)`
    - its one bit value is read by `vbdValue()`
    - used to reset the stimulation and disable the lights
- turning the encoder
    - tunes the `vbdValue()`
- `clk_i`, `rst_i` initially set to 1 and `trigger_i` is set to 0
- for every clock cycle, 

    ``` C++
    top->trigger_i = (vbdValue() > 50);
    ```

    If the encoder is turned to a point `vbdValue()` is larger than 50, the trigger is enabled and the lights starts to shine one by one. 

    ``` C++
    vbdBar(top->a0_o & 0xFF);
    ```

    This sets the LED lights. The `AND` operation makes sure only the bottom 8 bits from the output is taken and each of the light signal correspond to a bit, where 1 indicates that it is on to be red and 0 indicates it is off


#### Pdf testbench

- Two versions
    - one with plotting on Vbuddy
    - one without using the Vbuddy
        - instead output distribution value is written into a seperate txt file, and gets ploted by a python code
        - no header files related to the Vbuddy are declared

Below is a overview of the pdf testbench (using the without Vbuddy version as an example), more details into the changes see pdf testing markdown:
- the reference program is modified such that `a0_o` is output to be -1 when the pdf_array in the data memory has completed its value update and the program is starting to loop to read each values in the pdf_array; hence in the stimulation there is the following code:

    ``` C++
    if (top->a0_o == -1)
    {
        currentlyReading = true;
    }
    ``` 

- when reading is enabled, refering to the given reference program, due to the loop and the incrementation of the address instruction, `a0_o` repeats the same for 3 cycles for every distribution output data, hence the test bench counts the number of cycles after reading being enabled, it is modulated with 3 to make sure that the repeated output `a0_o` value only gets written once into the txt file:

    ``` C++
    if (currentlyReading)
    {
        cntReading++;
        if (cntReading % 3 == 2)
        {
            pdfFile << top->a0_o << "\n";
        }
    }
    ```

- since only 256 values will be output into the txt file, that corresponds to 3 * 256 cycles, after writting all the values needed into the txt file, the program breaks and terminates: (as the instruction program does not terminate due to the returns and the loops and repeatingly output the data in the pdf_array forever, it is required to terminate by a condition in the test bench):

    ``` C++
    if (cntReading > 256 * 3)
        break;
    ```


Meanwhile, in the version that uses the Vbuddy, note the following modification:

Using a temporary vector pdf_values to stores the outputs to be plotted. 

``` C++
std::vector<uint32_t> pdf_values;
``` 

This decision is made because if within the loop the Vbuddy is plotted as the program is evaluated, this would have slowed the stimulation down. 

``` C++
pdfFile << top->a0 << "\n";
pdf_values.push_back(top->a0);
``` 

Then at the end of all evaluation of the program, outside of the cycled loop, it takes the value from the stored vector, and plots to to the Vbuddy as following:

``` C++
for (int i = 0; i < pdf_values.size(); i++)
{
    vbdPlot(pdf_values[i], 0, 255);
    std::this_thread::sleep_for(std::chrono::microseconds(100));
}
``` 