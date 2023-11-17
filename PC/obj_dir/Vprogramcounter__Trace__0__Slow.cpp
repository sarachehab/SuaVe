// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vprogramcounter__Syms.h"


VL_ATTR_COLD void Vprogramcounter___024root__trace_init_sub__TOP__0(Vprogramcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"PCsrc", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+4,"PC", false,-1, 31,0);
    tracep->pushNamePrefix("programcounter ");
    tracep->declBus(c+6,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"PCsrc", false,-1);
    tracep->declBus(c+3,"ImmOp", false,-1, 31,0);
    tracep->declBus(c+4,"PC", false,-1, 31,0);
    tracep->declBus(c+5,"c", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vprogramcounter___024root__trace_init_top(Vprogramcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root__trace_init_top\n"); );
    // Body
    Vprogramcounter___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vprogramcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogramcounter___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vprogramcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vprogramcounter___024root__trace_register(Vprogramcounter___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vprogramcounter___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vprogramcounter___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vprogramcounter___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vprogramcounter___024root__trace_full_sub_0(Vprogramcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vprogramcounter___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root__trace_full_top_0\n"); );
    // Init
    Vprogramcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogramcounter___024root*>(voidSelf);
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vprogramcounter___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vprogramcounter___024root__trace_full_sub_0(Vprogramcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->PCsrc));
    bufp->fullIData(oldp+3,(vlSelf->ImmOp),32);
    bufp->fullIData(oldp+4,(vlSelf->PC),32);
    bufp->fullIData(oldp+5,(vlSelf->programcounter__DOT__c),32);
    bufp->fullIData(oldp+6,(0x20U),32);
}
