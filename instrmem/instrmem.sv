module instrmem #(
    parameter   A_WIDTH = 5,
                D_WIDTH = 32
)(
    input logic clk,
    input logic [A_WIDTH-1:0] A,
    output logic [D_WIDTH-1:0] instr
);

logic [D_WIDTH-1:0] rom_array [2**A_WIDTH-1:0];

initial begin
    $display("Loading instruction memory.");
    $readmemh("instructions.mem" , rom_array);
end;

always_ff @(posedge clk) 
    instr <= rom_array [A];

endmodule
