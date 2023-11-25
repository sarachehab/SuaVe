module alu_top#(
    parameter DATA_WIDTH = 32
)(
    input  logic [DATA_WIDTH-1:0] alusrc1, alusrc2,
    input  logic [2:0] aluctrl,
    output logic [DATA_WIDTH-1:0] aluresult,
    output logic eq
);

always_comb begin 
    eq = alusrc1 == alusrc2;
    case (aluctrl)
        // add
        000: aluresult = alusrc1 + alusrc2;
        // subtract
        001: aluresult = alusrc1 - alusrc2;
        // and
        010: aluresult = alusrc1 & alusrc2;
        // or
        011: aluresult =alusrc1 | alusrc2;
        // SLT
        101: aluresult = alusrc2 - alusrc1;
        default: aluresult = DATA_WIDTH'b0;
    endcase 
end

endmodule
