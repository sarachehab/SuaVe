module instrmem #(
    parameter   A_WIDTH = 5,
                D_WIDTH = 32,
                BYTE_SIZE = 8
)(
    input logic [A_WIDTH-1:0] A,
    output logic [D_WIDTH-1:0] instr
);
/*

rom array as 2-dimensional array so that it looks like: 
0 : [31:24][23:16][15:8][7:0]
1 : [31:24][23:16][15:8][7:0]
...

*/
logic [(D_WIDTH/BYTE_SIZE)-1:0][BYTE_SIZE-1:0] mem [(2**A_WIDTH)-1:0];

initial begin
    //to initiliase this memory we first load the instructions into a 1-dimensional array and then process this data
    // logic [D_WIDTH-1:0] flattened_mem [2**A_WIDTH-1:0];
    $readmemh("instructions.mem" , mem);
    
    // //display contents if need be:
    // for (int i = 0 ; i < (2**A_WIDTH) ; i++ ) begin
    //     $write("row%d:" , i);
    //     for(int j = 3 ; j >= 0 ; j--) begin
    //         $write(" %h " , mem[i][j]);
    //     end
    //     $display("");
    // end

end;

assign instr = mem[{2'b00 , A[4:2]}]; 
//cannot access invidual bytes but this should work for this task.
//to access indidual bytes, additional hardware required to enter byte mode.

endmodule
