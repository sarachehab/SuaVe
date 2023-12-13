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
	//input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o,// ,mem_byte_op_o
	output logic [1:0] age_0, //for testing purpose
	output logic valid_o
);
//------------------------------Data_Structures------------------------------
	// Data and tag
	logic [width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];  //shoudlnt this be 2 bits cuz we 
	logic [1:0] age [((2**set_bits)-1):0][3:0];

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
    //assign read_data_o = cache_data[0][1];
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
	// 	logic [1:0] result;
	// 	for(int i = 0 ; i < 4 ; i++) begin
	// 		if(ages[i] == 2'b00) result = i[1:0];
	// 	end
    //     return result;
    // endfunction

	// function  logic[1:0] lru_calc (output logic [1:0] ages [3:0] , input logic [1:0] index);
	// 	ages[index] = 2'b11;
	// 	for(int i = 0 ; i < 4 ; i++) begin
	// 		if((i[1:0] != index) && (ages[i[1:0]] > ages[index])) begin
	// 			ages[i[1:0]] = ages[i[1:0]] - 1'b1;
	// 		end
	// 	end
	// 	return ages;
	// endfunction

//------------------------------Combinational_Read------------------------------
	always_ff@(posedge clk_i) begin
		for(int i = 0 ; i < 4 ; i++) begin
	 		if(age[set][i] == 2'b00)begin 
			LRU_pointer <= i[1:0];
			end
	 	end

		if ((tag == cache_tag[set][0]) && (valid[set][0] == 1)) begin 
			hit <= 1;
			age[set][0] <= 2'b11;
		for(int i = 0 ; i < 4 ; i++) begin
			if((i[1:0] != 0) && (age[set][i[1:0]] > age[set][0])) begin
				age[set][i[1:0]] <= (age[set][i[1:0]] - 1'b1);
				end
			end

		end
		else if (tag == cache_tag[set][1] && valid[set][1] == 1)begin

			hit <= 1;
			age[set][1] <= 2'b11;
		for(int i = 0 ; i < 4 ; i++) begin
			if((i[1:0] != 1) && (age[set][i[1:0]] > age[set][1])) begin
				age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
				end
			end

		end
		else if (tag == cache_tag[set][2] && valid[set][2] == 1)begin

			hit <= 1;
			age[set][2] <= 2'b11;
		for(int i = 0 ; i < 4 ; i++) begin
			if((i[1:0] != 2) && (age[set][i[1:0]] > age[set][2])) begin
				age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
				end
			end

		end
		else if (tag == cache_tag[set][3] && valid[set][3] == 1)begin

			hit <= 1;
			age[set][3] <= 2'b11;
		for(int i = 0 ; i < 4 ; i++) begin
			if((i[1:0] != 3) && (age[set][i[1:0]] > age[set][3])) begin
				age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
				end
			end
		end
		else begin
		//read miss
			//mem_address_o <= address_i; //sending address to memory	
			hit <= 0;
			readmiss <= 1;
		
		end
	end
//------------------------------Synchronous_write------------------------------
	always_ff@(negedge clk_i) begin

// when do we write
// if we get a read miss 

		// $display("%b %b %b %b - %b", age[set][0], age[set][1], age[set][2], age[set][3], LRU_pointer);
		// $display("v:%b %h v:%b %h v:%b %h v:%b %h\n", valid[set][0] ,  cache_data[set][0]  , valid[set][1] , cache_data[set][1] , valid[set][2] , cache_data[set][2] , valid[set][3] , cache_data[set][3]);

		//write function:
		//load instruction and miss:
		if(readmiss) begin
            // $display("this shit dont work");
            // $display ("%h", tag);
            // $display("%h", write_data_i);

			cache_tag[set][LRU_pointer] <= tag;
			cache_data[set][LRU_pointer] <= write_data_i;
			valid[set][LRU_pointer] <= 1'b1;
            read_data_o <= cache_data[0][LRU_pointer];
		end
		//store and hit
		else if(write_enable_i && hit) begin

			mem_write_enable_o <= 1'b1;
			mem_write_data_o <= write_data_i;

			if(cache_tag[set][0] == tag) begin
				cache_data[set][0] <= write_data_i;
				valid[set][0] <= 1'b1;
                read_data_o <= cache_data[0][0];
			end
			else if(cache_tag[set][1] == tag) begin
				cache_data[set][1] <= write_data_i;
				valid[set][1] <= 1'b1;        
                read_data_o <= cache_data[0][1];      
			end
			else if(cache_tag[set][2] == tag) begin
				cache_data[set][2] <= write_data_i;
				valid[set][2] <= 1'b1;
                read_data_o <= cache_data[0][2];
			end
			else if(cache_tag[set][3] == tag) begin
				cache_data[set][3] <= write_data_i;
				valid[set][3] <= 1'b1;
                read_data_o <= cache_data[0][3];
			end
		end
		//store and miss
		else if(write_enable_i && !hit) begin
			cache_data[set][LRU_pointer] <= write_data_i;
			cache_tag[set][LRU_pointer] <= tag;
			valid[set][LRU_pointer] <= 1'b1;
		end



	end
endmodule

