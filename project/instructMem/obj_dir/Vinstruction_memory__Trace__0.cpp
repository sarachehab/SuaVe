// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vinstruction_memory__Syms.h"


void Vinstruction_memory___024root__trace_chg_sub_0(Vinstruction_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vinstruction_memory___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_chg_top_0\n"); );
    // Init
    Vinstruction_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstruction_memory___024root*>(voidSelf);
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vinstruction_memory___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vinstruction_memory___024root__trace_chg_sub_0(Vinstruction_memory___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->addr_i),32);
    bufp->chgIData(oldp+1,(vlSelf->instr_o),32);
    bufp->chgIData(oldp+2,((0xfffffffcU & vlSelf->addr_i)),32);
}

void Vinstruction_memory___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vinstruction_memory___024root__trace_cleanup\n"); );
    // Init
    Vinstruction_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstruction_memory___024root*>(voidSelf);
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
