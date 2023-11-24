// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[8]),8);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[9]),8);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[10]),8);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[11]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[12]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[13]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[14]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[15]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[16]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[17]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[18]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[19]),8);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[20]),8);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[21]),8);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[22]),8);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[23]),8);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[24]),8);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[25]),8);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[26]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[27]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[28]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[29]),8);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[30]),8);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__INSTRMEM__DOT__rom_array[31]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__ImmOP),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__instr),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter),32);
        bufp->chgBit(oldp+36,((1U & (~ (vlSelf->top__DOT__instr 
                                        >> 6U)))));
        bufp->chgBit(oldp+37,((1U & (~ (vlSelf->top__DOT__instr 
                                        >> 5U)))));
        bufp->chgBit(oldp+38,(((vlSelf->top__DOT__instr 
                                >> 6U) & (vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                                          != vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2))));
        bufp->chgBit(oldp+39,((vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                               == vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2)));
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+41,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+42,((0x1fU & (vlSelf->top__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__DATAPATH__DOT__ALUop1),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf
                                [(0x1fU & (vlSelf->top__DOT__instr 
                                           >> 0x14U))]),32);
        bufp->chgIData(oldp+45,((vlSelf->top__DOT__DATAPATH__DOT__ALUop1 
                                 + vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2)),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__DATAPATH__DOT____Vcellinp__opAlu__ALUop2),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[0]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[1]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[2]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[3]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[4]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[5]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[6]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[7]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[8]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[9]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[10]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[11]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[12]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[13]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[14]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[15]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[16]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[17]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[18]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[19]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[20]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[21]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[22]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[23]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[24]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[25]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[26]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[27]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[28]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[29]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[30]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__DATAPATH__DOT__regf__DOT__rf[31]),32);
        bufp->chgIData(oldp+79,((0xfffffffcU & vlSelf->top__DOT__PROGRAMCOUNTER__DOT__program_counter)),32);
    }
    bufp->chgBit(oldp+80,(vlSelf->clk));
    bufp->chgBit(oldp+81,(vlSelf->rst));
    bufp->chgIData(oldp+82,(vlSelf->a0),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
