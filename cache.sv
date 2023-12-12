module cache#(
	//cache parameters
	parameter 	set_bits = 4,
			 	tag_bits = 26,
				width = 32
)(	//input signals
	input logic clk_i , write_enable_i , //byte_op, 
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic hit_o, // needed or not ? 
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o// ,mem_byte_op_o
);
//------------------------------Data_Structures------------------------------
	// Data and tag
	logic [width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];
	logic [1:0] age [((2**set_bits)-1):0][3:0];

//------------------------------Internal_signals------------------------------
	//Signals to control cache access
	logic [tag_bits-1:0] tag;
	logic [3:0] set;
	logic hit , readmiss;
	logic [1:0] LRU_pointer;
//------------------------------Assign_values------------------------------
	assign tag = address_i[31:6];
	assign set = address_i[5:2];
	assign hit_o = hit;
	assign mem_address_o = address_i;
//------------------------------Startup_Procedure------------------------------
	initial begin
		hit = 1'b0;
        for (int i = 0; i < (2**set_bits); i = i + 1) begin
            for (int j = 0; j < 4; j = j + 1) begin
                valid[i][j] = 1'b0;
                age[i][j] = j;
            end
        end
	end
//------------------------------Internal_Functions------------------------------
    function logic [1:0] get_min (logic [1:0] ages [3:0]);
		logic [1:0] result;
		for(int i = 0 ; i < 4 ; i++) begin
			if(ages[i] == 2'b00) result = i;
		end
        return result;
    endfunction

	function logic [1:0] LRU_calc (logic [1:0] a);
		logic [1:0] result;
		if(a == 2'b00) result = 2'b00;
		else result = a - 2'b01;
		return result;
	endfunction
//------------------------------Combinational_Read------------------------------
	always_comb begin
		if (tag == cache_tag[set][0] && valid[set][0] == 1) begin 
			read_data_o = cache_data[set][0];
			hit = 1;
			age[set][0] = 2'b11;
			age[set][1] = LRU_calc(age[set][1]);
			age[set][2] = LRU_calc(age[set][2]);
			age[set][3] = LRU_calc(age[set][3]);
		end
		else if (tag == cache_tag[set][1] && valid[set][1] == 1)begin
			read_data_o = cache_data[set][1];
			hit = 1;
			age[set][1] = 2'b11;
			age[set][0] = LRU_calc(age[set][0]);
			age[set][2] = LRU_calc(age[set][2]);
			age[set][3] = LRU_calc(age[set][3]);
		end
		else if (tag == cache_tag[set][2] && valid[set][2] == 1)begin
			read_data_o = cache_data[set][2];
			hit = 1;
			age[set][2] = 2'b11;
			age[set][0] = LRU_calc(age[set][0]);
			age[set][1] = LRU_calc(age[set][1]);
			age[set][3] = LRU_calc(age[set][3]);
		end
		else if (tag == cache_tag[set][3] && valid[set][3] == 1)begin
			read_data_o = cache_data[set][3];
			hit = 1;
			age[set][3] = 2'b11;
			age[set][0] = LRU_calc(age[set][0]);
			age[set][1] = LRU_calc(age[set][1]);
			age[set][2] = LRU_calc(age[set][2]);
		end
		else begin
			read_data_o = mem_incoming_data_i;
			hit = 0;
			readmiss = 1;
			age[set][0] = LRU_calc(age[set][0]);
			age[set][1] = LRU_calc(age[set][1]);
			age[set][2] = LRU_calc(age[set][2]);
			age[set][3] = LRU_calc(age[set][3]);
			age[set][LRU_pointer] = 2'b11;
		end
		LRU_pointer = get_min(age[set]);
	end
//------------------------------Synchronous_write------------------------------
	always_ff@(negedge clk_i) begin
		if(write_enable_i && !hit) begin
			//write to mem
			//ignore cache write for now atleast :(
			mem_write_enable_o <= 1;
			mem_write_data_o <= write_data_i;
		end
		else if(write_enable_i && hit) begin
			//write to cache and mem...
			mem_write_enable_o <= 1;
			mem_write_data_o <= write_data_i;

			cache_data[set][LRU_pointer] <= write_data_i;
			cache_tag[set][LRU_pointer] <= tag;
			valid[set][LRU_pointer] <= 1;
		end
		else if(readmiss) begin
			//write to cache...
			cache_data[set][LRU_pointer] <= mem_incoming_data_i;
			cache_tag[set][LRU_pointer] <= tag;
			valid[set][LRU_pointer] <= 1;
		end
	end
endmodule




