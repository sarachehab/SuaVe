module cacheline #(
    parameter   width = 32,
                set_bits = 4,
			 	tag_bits = 30
)(
	input logic clk_i , write_enable_i, cache_enable_i,
	input logic [width-1:0] address_i , write_data_i,
	//output signals
	output logic hit_o,
	output logic [width-1:0] read_data_o,
	//memory interface signals
	input logic [width-1:0] mem_incoming_data_i,
	output logic [width-1:0] mem_address_o , mem_write_data_o,
	output logic mem_write_enable_o , mem_byte_op_o
);
//--------------------------data_structure---------------------------

	logic [width-1:0] cache_data [((2**set_bits)-1):0][3:0];
	logic [tag_bits-1:0] cache_tag [((2**set_bits)-1):0][3:0];
	logic valid [((2**set_bits)-1):0][3:0];
	logic [1:0] age [((2**set_bits)-1):0][3:0];
    logic [1:0] LRU_pointer[((2**set_bits)-1):0];
//------------------------internal_signals----------------------------
    logic [tag_bits-1 :0] tag;
    logic hit , readmiss;
    logic [3:0] set;
    //assign_values
    assign set = address_i[5:2];
    assign tag = address_i[31:2];
    assign hit_o = hit;
    assign mem_address_o = address_i;
    assign mem_write_enable_o = write_enable_i;
    assign mem_byte_op_o = 1'b0; // yet to be handled...
//----------------------------------------------------------------------


    initial begin
        hit = 1'b0;
        readmiss = 1'b0;
        for(int i = 0 ; i < 4 ; i++) begin
            for(int j = 0; j<16; j++)begin
                valid[j][i[1:0]] = 1'b0;
                LRU_pointer[j] = 2'b00;
                age[j[3:0]][i[1:0]]=i[1:0];
            end
        end
    end

    always_ff@(posedge clk_i)begin
        for(int i = 0 ; i < 4 ; i++) begin
            if(age[set][i] == 2'b00)begin 
                LRU_pointer[set] <= i[1:0];
            end
        end
    end

    always_comb begin

        if(cache_enable_i) begin


            for(int i=0; i<4; i++)begin
                if(cache_tag[set][i]==tag)begin
                    hit = valid[set][i[1:0]];
                    readmiss =  0 | ~ valid[set][i[1:0]];
                    read_data_o = cache_data[set][i[1:0]];
                    end
                else begin
                    hit = 1'b0;
                    if(write_enable_i) readmiss = 0;
                    else readmiss = 1;
                    read_data_o = mem_incoming_data_i;
                end    
            end
        end
            // if(tag == cache_tag[0]) begin
            //     hit = valid[0];
            //     readmiss = 0 | ~ valid[0];
            //     read_data_o = cache_data[0];
            // end
            // else if(tag == cache_tag[1]) begin
            //     hit = valid[1];
            //     readmiss = 0 | ~ valid[1];
            //     read_data_o = cache_data[1];
            // end
            // else if(tag == cache_tag[2]) begin
            //     hit = valid[2];
            //     readmiss = 0 | ~ valid[2];
            //     read_data_o = cache_data[2];
            // end
            // else if(tag == cache_tag[3]) begin
            //     hit = valid[3];
            //     readmiss = 0 | ~ valid[3];
            //     read_data_o = cache_data[3];
            // end
            
        //end
        else begin
            readmiss = 0;
            hit = 0;
            read_data_o = 32'b0;
        end
    end
//---------------------------------------------------------------------
    always_ff @(negedge clk_i) begin

        // $display ("%h", tag);
        // $display("%h", write_data_i);

        // $display("%b %b %b %b - %b", age[0], age[1], age[2], age[3], LRU_pointer);
		// $display("v:%b %h v:%b %h v:%b %h v:%b %h\n", valid[0] ,  cache_data[0]  , valid[1] , cache_data[1] , valid[2] , cache_data[2] , valid[3] , cache_data[3]);


        if(readmiss) begin
            //$display("%h" , mem_incoming_data_i);
            cache_tag[set][LRU_pointer[set]] <= tag;
            cache_data[set][LRU_pointer[set]] <= mem_incoming_data_i;
            valid[set][LRU_pointer[set]] <= 1'b1;
            age[set][LRU_pointer[set]] <= 2'b11;
            for(int i = 0 ; i < 4 ; i++) begin
			        if((i[1:0] != LRU_pointer[set]) && (age[set][i[1:0]] > age[set][LRU_pointer[set]])) begin
				        age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
				    end
			    end
        end
        else if(write_enable_i && hit) begin
            mem_write_data_o <= write_data_i;


            for(int i=0; i<4; i++)begin
                if(cache_tag[set][i]==tag)begin
                    cache_data[set][i[1:0]] <= write_data_i;
                    valid[set][i[1:0]] <= 1'b1;
                    age[set][i[1:0]] <= 2'b11;
                    for(int j=0; j< 4; j++)begin
                        if((j[1:0] != i[1:0]) && (age[set][j[1:0]] > age[set][i[1:0]]))begin
                            age[set][j[1:0]] <= age[set][j[1:0]] - 1'b1;
                        end
                    end
                    
                end
            end
            // if(cache_tag[set][0] == tag) begin
                
            //     cache_data[set][0] <= write_data_i;
            //     valid[0] <= 1'b1;
			//     age[0] <= 2'b11;
		    //     for(int i = 0 ; i < 4 ; i++) begin
			//         if((i[1:0] != 0) && (age[i[1:0]] > age[0])) begin
			// 	        age[i[1:0]] <= age[i[1:0]] - 1'b1;
			// 	    end
			//     end
            // end

            // if(cache_tag[set][1] == tag) begin
            //     cache_data[set][1] <= write_data_i;
            //     valid[1] <= 1'b1;
			//     age[1] <= 2'b11;
		    //     for(int i = 0 ; i < 4 ; i++) begin
			//         if((i[1:0] != 1) && (age[i[1:0]] > age[1])) begin
			// 	        age[i[1:0]] <= age[i[1:0]] - 1'b1;
			// 	    end
			//     end
            // end

            // if(cache_tag[set][2] == tag) begin
                
            //     cache_data[set][2] <= write_data_i;
            //     valid[2] <= 1'b1;
			//     age[2] <= 2'b11;
		    //     for(int i = 0 ; i < 4 ; i++) begin
			//         if((i[1:0] != 2) && (age[i[1:0]] > age[02])) begin
			// 	        age[i[1:0]] <= age[i[1:0]] - 1'b1;
			// 	    end
			//     end
            // end

            // if(cache_tag[set][3] == tag) begin
                
            //     cache_data[set][3] <= write_data_i;
            //     valid[3] <= 1'b1;
			//     age[3] <= 2'b11;
		    //     for(int i = 0 ; i < 4 ; i++) begin
			//         if((i[1:0] != 3) && (age[i[1:0]] > age[3])) begin
			// 	        age[i[1:0]] <= age[i[1:0]] - 1'b1;
			// 	    end
			//     end
            // end
        end
        else if(write_enable_i && !hit) begin
            age[set][LRU_pointer[set]] <= 2'b11;
            for(int i = 0 ; i < 4 ; i++) begin
			    if((i[1:0] != LRU_pointer[set]) && (age[set][i[1:0]] > age[set][LRU_pointer[set]])) begin
			        age[set][i[1:0]] <= age[set][i[1:0]] - 1'b1;
			    end
			end
            //$display("%h" , write_data_i);
            mem_write_data_o <= write_data_i;
            cache_tag[set][LRU_pointer[set]] <= tag;
            cache_data[set][LRU_pointer[set]] <= write_data_i;
            valid[set][LRU_pointer[set]] <= 1'b1;

        end
    end
endmodule


/*note to self
when there is a write hit it does work 
but in the middle we do get a moment where the read_data_output holds a garbage value
shouldnt technically matter because this is a dont care...? 

for a write miss we have a problem where it takes an extra clock cycle to first write to memory... then write to cache
cannot write simultaeously
*/

