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
	output logic mem_write_enable_o,// ,mem_byte_op_o
	output logic [1:0] age_0, //for testing purpose
	output logic valid_o
);
//------------------------------Data_Structures------------------------------
	// Data and tag
	logic [width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];
	logic [1:0] counter [((2**set_bits)-1):0];
	//logic [1:0] age [((2**set_bits)-1):0][3:0];

//------------------------------Internal_signals------------------------------
	//Signals to control cache access
	logic [tag_bits-1:0] tag;
	logic [3:0] set;
	logic hit , readmiss;
	//logic [1:0] LRU_pointer;
//------------------------------Assign_values------------------------------
	assign tag = address_i[31:6];
	assign set = address_i[5:2];
	assign hit_o = hit;
	assign mem_address_o = address_i;
	//assign age_0 = age[0][0]; //for testing purpose
	assign valid_o = valid[0][0];
//------------------------------Startup_Procedure------------------------------
	initial begin
		hit = 1'b0;
		//LRU_pointer = 2'b00;
        for (int i = 0; i < (2**set_bits); i = i + 1) begin
            for (int j = 0; j < 4; j = j + 1) begin
                valid[i][j] = 1'b0;
                //age[i][j] = j[1:0];
            end
        end
	end
//------------------------------Internal_Functions------------------------------
    // function logic [1:0] get_min (logic [1:0] ages [3:0]);
	// 	logic [1:0] result = 2'b11;
	// 	for (int i = 0 ; i < 4; i++) begin
	// 		if(ages[i] == 2'b00) result = i[1:0];
	// 	end
    //     return result;
    // endfunction

	// function automatic void lru_calc (output logic [1:0] updated_ages [3:0] , input logic [1:0] ages [3:0] , input logic [1:0] index);
	// 	updated_ages[index] = 2'b11;
	// 	for (int i = 0; i < 4; i++) begin
	// 		if((i[1:0] != index) && (ages[i[1:0]] > ages[index])) begin
	// 			updated_ages[i[1:0]] = ages[i[1:0]] - 1'b1;
	// 		end
	// 	end
	// endfunction

	// always_comb begin
	// $display("%b %b %b %b - %b", age[set][0], age[set][1], age[set][2], age[set][3], LRU_pointer);
	// $display("v:%b %h v:%b %h v:%b %h v:%b %h\n", valid[set][0] ,  cache_data[set][0]  , valid[set][1] , cache_data[set][1] , valid[set][2] , cache_data[set][2] , valid[set][3] , cache_data[set][3]);
    // // for (int i = 0; i < (2**set_bits); i = i + 1) begin
    // //     for (int j = 0; j < 4; j = j + 1) begin
    // //         age[i][j] = j[1:0];
    // //     end
    // // end
	// end

//------------------------------Combinational_Read------------------------------
	always_ff@(posedge clk_i) begin
		//LRU_pointer <= get_min(age[set]);
		if ((tag == cache_tag[set][0]) && (valid[set][0] == 1)) begin 
			read_data_o <= cache_data[set][0];
			counter[set] <= counter[set] + 1'b1;
			hit <= 1;
			//lru_calc(age[set] , age[set] , 2'b00);

		 end
		else if (tag == cache_tag[set][1] && valid[set][1] == 1)begin
			read_data_o <= cache_data[set][1];
			hit <= 1;
			counter[set] <= counter[set] + 1'b1;
			//lru_calc(age[set] , age[set] , 2'b01);

		end
		else if (tag == cache_tag[set][2] && valid[set][2] == 1)begin
			read_data_o <= cache_data[set][2];
			hit <= 1;
			counter[set] <= counter[set] + 1'b1;
			//lru_calc(age[set] , age[set] , 2'b10);

		end
		else if (tag == cache_tag[set][3] && valid[set][3] == 1)begin
			read_data_o <= cache_data[set][3];
			hit <= 1;
			counter[set] <= counter[set] + 1'b1;
			//lru_calc(age[set] , age[set] , 2'b11);

		end
		else begin
			mem_address_o <= address_i;
			read_data_o <= mem_incoming_data_i;
			hit <= 0;
			counter[set] <= counter[set] + 1'b1;
			readmiss <= 1;
			//lru_calc(age[set] , age[set] , LRU_pointer);
		end
	end
//------------------------------Synchronous_write------------------------------
	always_ff@(negedge clk_i) begin

		if(write_enable_i) begin
			cache_data[set][counter] <= write_data_i;
			cache_tag[set][counter] <= tag;
			valid[set][counter] <= 1;
		end
		else if(write_enable_i && !hit) begin
			
			//write to mem
			//ignore cache write for now atleast :(
			mem_write_enable_o <= 1;
			mem_write_data_o <= write_data_i;

		end
		else if(write_enable_i && hit) begin
			//write to cache and mem...
			mem_write_enable_o <= 1;
			mem_write_data_o <= write_data_i;

			cache_data[set][counter] <= write_data_i;
			cache_tag[set][counter] <= tag;
			valid[set][counter] <= 1;

		end
		else if(readmiss) begin
			//write to cache...
			cache_data[set][counter] <= write_data_i;
			cache_tag[set][counter] <= tag;
		end

	end
endmodule



