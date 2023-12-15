# Fully Associative Cache
The first thing when adding a fully set associative cache to the single cycle cpu was to change the format of it. 
An extra signal was added to the output from the controlunit called `cache_enable_o` which must output a high and enable the cache when it is a memory instruction (load or store). For our cpu that only uses the majority of the RV32I instruction set, the only time memory is used is when there is a store word (`sw`), store byte (`sb`), load word(`lw`) and load byte (`lbu`). Therefore, for these signals cache enable is high and then only then can cache be used. Secondly, instead of the alu being connected to main memory, the alu is connected to cache and it is the cache which interfaces with main memory. 

Coming to the structure of the cache, it is important to consider the data structures mentioned below:
```verilog
    parameter   width = 32,
    parameter   tag_bits = 30
    logic [width-1:0] cache_data[15:0]; //<-easily adjust size of cache here...
    logic [tag_bits-1:0] cache_tag [15:0];
    logic valid [15:0];
    logic [3:0] counter;
``````

Here it can be seen that there is a cache with 16 locations and each location has specific data which is 32 bits as well as a cache tag  which is 30 bits. Since there is only one set in fully associative, there is no need to address a specific set. A valid bit must also be included for each of the 16 ways and a counter which is a pointer that incrementing by 1 and can take values between 0 and 15. 

Next some input/output signals can be assigned values to internal signals that are then used in the code for clarity
```verilog
    assign tag = address_i[31:2];
    assign mem_byte_op_o = 1'b0;
    assign byteoffset = address_i[1:0];
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
```
Here the tag is assigned to be bits [31:2] as [1:0] is the byte offset. Spacial locality can be leveraged by assigning `mem_byte_op_o` to `1'b0` such that the cache always fetches a full word from main memory. With this, if a program reads consecutive bytes, these are already present in cache. Then byteoffset is bit [1:0] of the address which specifies the byte of the address which must be accessed during either a load or store instruction. `mem_write_enable_o` can be assigned to `write_enable_i` because this cpu implements a write back cache which means that any writes to cache are also reflected in main memory.

### Getting into the actual code

For the cache logic to work, it is important to determine what is being requested from the cache. There are four cases: 
| Instruction Type | hit/miss | To Do                                                                            |
|------------------|----------|----------------------------------------------------------------------------------|
| Load             | hit      | read_data_o = data in cache                                                      |
| Load             | miss     | read_data_o = data from memory, cache location = data from memory                 |
| Store            | hit      | read_data_o = x(don't care), update value in cache and memory in correct location |
| Store            | miss     | read_data_o = x, update value in cache and memory in new location                 |

For each of these, the cache must do slightly different things which are described above. These can be achieved by a mix of both synchronous and combinational logic.

```verilog
    for(int i = 0 ; i < 16 ; i++) begin
        if(cache_tag[i[3:0]] == tag) begin
            hit <= valid[i[3:0]];
            wayhit <= i[3:0];
            break;
        end
        else
            hit <= 1'b0;
    end
```
The above code is within an `always_ff` and is used to determine if there is a hit or a miss. A for loop can be used to check if there is a tag match. If a tag match is found, hit can be set high and the location of this tag match must be stored into variable: `wayhit`. It is possible to differentiate between load and store instruction with the use of the `write_enable_i` signal which goes high if there is a store instruction. With these signals, it is possible to carry out all required operations as shown below:

#### case 1 : Load & Hit
```verilog
    //always_ff:
    if((write_enable_i==1'b1) || (hit==1'b0)) begin
        counter <= counter + 1'b1;
    end
    //always_comb:
    if(byte_op_i)begin
        case(byteoffset)
        2'b00 : read_data_o = { {24'b0},cache_data[wayhit][7:0]};
        2'b01 : read_data_o = { {24'b0},cache_data[wayhit][15:8]};
        2'b10 : read_data_o = { {24'b0},cache_data[wayhit][23:16]};
        2'b11 : read_data_o = { {24'b0},cache_data[wayhit][31:24]};
        endcase
    end
    else begin
        read_data_o = cache_data[wayhit];;
    end
```
Counter, which points to the location which will be written to next must be incremented synchronously. Since, this is a read hit, the cache can output the data from the `cache_data` data structure from the location in which a hit was detected (stored in `wayhit`). To implement byte operations, a simple conditional and case statement can be used to output the correct byte from the cache location. If there isnt a byte operation, the cache can simply output the whole 32 bit word.

#### case 2 : Load & miss
```verilog
    //always_ff
    if((write_enable_i == 1'b0) && (hit==1'b0)) begin
        cache_data[counter] <= mem_incoming_data_i;
        cache_tag[counter] <= tag;
        valid[counter] <= 1'b1;
    end
    //always_comb
    if(byte_op_i)begin
        case(byteoffset)
        2'b00 : read_data_o = { {24'b0},mem_incoming_data_i[7:0]};
        2'b01 : read_data_o = { {24'b0},mem_incoming_data_i[15:8]};
        2'b10 : read_data_o = { {24'b0},mem_incoming_data_i[23:16]};
        2'b11 : read_data_o = { {24'b0},mem_incoming_data_i[31:24]};
        endcase
    end
    else begin
        read_data_o = mem_incoming_data_i;
    end
```
Here, the cache implement spacial locality by fetching the whole word from main memory if there is read miss. The data from the memory must be written to next location in the cache and must also be validated. Since this is still a load instruction, the data must still be output so the same byte operation logic can be used.

#### case 3 : Store & hit
For the following section `mem_byte_op_o` can be assigned the same value as `byte_op_o` since the bytes written to cache must also be written to memory. 
```verilog
    //always_ff
    if(byte_op_i) begin
        case(byteoffset)
            2'b00 : cache_data[wayhit][7:0] <= write_data_i[7:0];
            2'b01 : cache_data[wayhit][15:8] <= write_data_i[7:0];
            2'b10 : cache_data[wayhit][23:16] <= write_data_i[7:0];
            2'b11 : cache_data[wayhit][31:24] <= write_data_i[7:0];
        endcase
    end
    else begin
        cache_data[wayhit] <= write_data_i;
    end
    //always_comb
    mem_write_data_o = write_data_i;

```
For this instruction, the `cache_data` data structure is updated at the hit location with either a byte or a word depending on `byte_op_i`. This is done sychronously however, the signal sent to memory can be done asynchrously by simply setting it to the incoming data. 

#### Case 4 : Store & miss
```verilog
    //always_ff
    if(byte_op_i) begin
        case(byteoffset)
            2'b00 : cache_data[counter][7:0] <= write_data_i[7:0];
            2'b01 : cache_data[counter][15:8] <= write_data_i[7:0];
            2'b10 : cache_data[counter][23:16] <= write_data_i[7:0];
            2'b11 : cache_data[counter][31:24] <= write_data_i[7:0];
        endcase
        end
    else begin
        cache_data[counter] <= write_data_i;
    end
    cache_tag[counter] <= tag;
    valid[counter] <= 1'b1;
    //always_comb
    mem_write_data_o = write_data_i;
```
Here, the  `cache_data` data structure is updated at the location pointed to by the counter and as before, there is a conditional along side a case for byte opreations. In the always combine block, there is not difference between case 3 and case 4 since the same data must be written to memory, whether it is a hit or a miss. 

### Counter Explained
```verilog
    if((write_enable_i==1'b1) || (hit==1'b0)) begin //store word/byte -hit or not hit, or load word not hit
        counter <= counter + 1'b1;
    end
```
The counter is also kept syncronous. The logic behind incrementing the count is that every time there is a `write_enable_i` going high which means that the cache must write to `cache_data` and to memory or if there is a read miss meaning that a value must be fetched from memory and written to `cache_data`. In other words, whenever a value in `cache_data is updated` , the counter must be incremented such that the next write to `cache_data` is directed to the correct way. This is visible in vcd file produced by the simulation
![Alt text](../images/cache_waveform.png)
Each successive right occurs in the next cache location.
