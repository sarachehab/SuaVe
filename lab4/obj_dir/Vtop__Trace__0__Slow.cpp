// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+84,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->declBus(c+34,"ImmOP", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBus(c+36,"PC", false,-1, 31,0);
    tracep->declBit(c+37,"RegWrite", false,-1);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBit(c+37,"Immsrc", false,-1);
    tracep->declBit(c+39,"PCsrc", false,-1);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("CONTROLUNIT ");
    tracep->declBus(c+85,"I_WIDTH", false,-1, 31,0);
    tracep->declBus(c+84,"A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+40,"eq", false,-1);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBit(c+37,"regwrite", false,-1);
    tracep->declBit(c+38,"alusrc", false,-1);
    tracep->declBit(c+37,"immsrc", false,-1);
    tracep->declBit(c+39,"pcsrc", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DATAPATH ");
    tracep->declBus(c+84,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+37,"RegWrite", false,-1);
    tracep->declBit(c+38,"ALUsrc", false,-1);
    tracep->declBus(c+41,"rs1", false,-1, 4,0);
    tracep->declBus(c+42,"rs2", false,-1, 4,0);
    tracep->declBus(c+43,"rd", false,-1, 4,0);
    tracep->declBus(c+34,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->declBus(c+44,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+45,"RD2", false,-1, 31,0);
    tracep->declBus(c+46,"ALUout", false,-1, 31,0);
    tracep->pushNamePrefix("opAlu ");
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+44,"ALUop1", false,-1, 31,0);
    tracep->declBus(c+47,"ALUop2", false,-1, 31,0);
    tracep->declBus(c+46,"SUM", false,-1, 31,0);
    tracep->declBit(c+40,"EQ", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regf ");
    tracep->declBus(c+84,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+37,"WE3", false,-1);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBus(c+41,"AD1", false,-1, 4,0);
    tracep->declBus(c+42,"AD2", false,-1, 4,0);
    tracep->declBus(c+43,"AD3", false,-1, 4,0);
    tracep->declBus(c+46,"WD3", false,-1, 31,0);
    tracep->declBus(c+44,"RD1", false,-1, 31,0);
    tracep->declBus(c+45,"RD2", false,-1, 31,0);
    tracep->declBus(c+83,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+48+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("INSTRMEM ");
    tracep->declBus(c+84,"NUM_ADDRESSES", false,-1, 31,0);
    tracep->declBus(c+85,"PC_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"INSTRUCTION_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"A", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"rom_array", true,(i+0), 7,0);
    }
    tracep->declBus(c+80,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PROGRAMCOUNTER ");
    tracep->declBus(c+85,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+81,"clk", false,-1);
    tracep->declBit(c+82,"rst", false,-1);
    tracep->declBit(c+39,"PCsrc", false,-1);
    tracep->declBus(c+34,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+36,"PC", false,-1, 31,0);
    tracep->declBus(c+36,"program_counter", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SIGNEXTEND ");
    tracep->declBus(c+85,"I_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"instr", false,-1, 31,0);
    tracep->declBit(c+37,"immsrc", false,-1);
    tracep->declBus(c+34,"immop", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[8]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[9]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[10]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[11]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[12]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[13]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[14]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[15]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[16]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[17]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[18]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[19]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[20]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[21]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[22]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[23]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[24]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[25]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[26]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[27]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[28]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[29]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[30]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[31]),8);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ImmOP),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__instr),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter),32);
    bufp->fullBit(oldp+37,((1U & (~ (vlSelf->top__DOT__instr 
                                     >> 6U)))));
    bufp->fullBit(oldp+38,((1U & (~ (vlSelf->top__DOT__instr 
                                     >> 5U)))));
    bufp->fullBit(oldp+39,(((vlSelf->top__DOT__instr 
                             >> 6U) & (vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                                       != vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2))));
    bufp->fullBit(oldp+40,((vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                            == vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2)));
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->top__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__DATAPATH__DOT__ALUop1),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf
                             [(0x1fU & (vlSelf->top__DOT__instr 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+46,((vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                              + vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2)),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[1]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[2]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[3]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[4]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[5]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[6]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[7]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[8]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[9]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[10]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[11]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[12]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[13]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[14]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[15]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[16]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[17]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[18]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[19]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[20]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[21]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[22]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[23]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[24]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[25]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[26]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[27]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[28]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[29]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[30]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[31]),32);
    bufp->fullIData(oldp+80,((0xfffffffcU & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)),32);
    bufp->fullBit(oldp+81,(vlSelf->clk));
    bufp->fullBit(oldp+82,(vlSelf->rst));
    bufp->fullIData(oldp+83,(vlSelf->a0),32);
    bufp->fullIData(oldp+84,(5U),32);
    bufp->fullIData(oldp+85,(0x20U),32);
    bufp->fullIData(oldp+86,(8U),32);
}
