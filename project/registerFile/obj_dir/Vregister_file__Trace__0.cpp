// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vregister_file__Syms.h"


void Vregister_file___024root__trace_chg_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vregister_file___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_chg_top_0\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vregister_file___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vregister_file___024root__trace_chg_sub_0(Vregister_file___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+1,(vlSelf->register_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->register_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->register_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->register_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->register_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->register_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->register_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->register_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->register_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->register_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->register_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->register_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->register_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->register_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->register_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->register_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->register_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->register_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->register_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->register_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->register_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->register_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->register_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->register_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->register_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->register_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->register_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->register_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->register_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->register_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->register_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->register_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+33,(vlSelf->addr3_we_i));
    bufp->chgBit(oldp+34,(vlSelf->clk_i));
    bufp->chgCData(oldp+35,(vlSelf->addr1_i),5);
    bufp->chgCData(oldp+36,(vlSelf->addr2_i),5);
    bufp->chgCData(oldp+37,(vlSelf->addr3_i),5);
    bufp->chgIData(oldp+38,(vlSelf->addr3_wd_i),32);
    bufp->chgIData(oldp+39,(vlSelf->rd1_o),32);
    bufp->chgIData(oldp+40,(vlSelf->rd2_o),32);
    bufp->chgIData(oldp+41,(vlSelf->register_file__DOT__addr3_data_q),32);
    bufp->chgCData(oldp+42,(vlSelf->register_file__DOT__addr3_i_q),5);
}

void Vregister_file___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root__trace_cleanup\n"); );
    // Init
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
