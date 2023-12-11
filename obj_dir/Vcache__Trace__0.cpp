// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache__Syms.h"


void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_top_0\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcache___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cache__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+2,(vlSelf->cache__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+3,(vlSelf->cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    }
    bufp->chgBit(oldp+4,(vlSelf->clk_i));
    bufp->chgIData(oldp+5,(vlSelf->address_i),32);
    bufp->chgBit(oldp+6,(vlSelf->write_enable_i));
    bufp->chgIData(oldp+7,(vlSelf->write_data_i),32);
    bufp->chgIData(oldp+8,(vlSelf->read_data_o),32);
    bufp->chgBit(oldp+9,(vlSelf->hit_o));
    bufp->chgIData(oldp+10,((vlSelf->address_i >> 6U)),26);
    bufp->chgCData(oldp+11,((0xfU & (vlSelf->address_i 
                                     >> 2U))),4);
    bufp->chgBit(oldp+12,(vlSelf->cache__DOT__hit));
}

void Vcache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_cleanup\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
