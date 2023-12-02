// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vextend_unit__Syms.h"


VL_ATTR_COLD void Vextend_unit___024root__trace_init_sub__TOP__0(Vextend_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"instr_i", false,-1, 31,7);
    tracep->declBus(c+2,"imm_src_i", false,-1, 2,0);
    tracep->declBus(c+3,"imm_ext_o", false,-1, 31,0);
    tracep->pushNamePrefix("extend_unit ");
    tracep->declBus(c+4,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"instr_i", false,-1, 31,7);
    tracep->declBus(c+2,"imm_src_i", false,-1, 2,0);
    tracep->declBus(c+3,"imm_ext_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vextend_unit___024root__trace_init_top(Vextend_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root__trace_init_top\n"); );
    // Body
    Vextend_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vextend_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vextend_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vextend_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vextend_unit___024root__trace_register(Vextend_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vextend_unit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vextend_unit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vextend_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vextend_unit___024root__trace_full_sub_0(Vextend_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vextend_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root__trace_full_top_0\n"); );
    // Init
    Vextend_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vextend_unit___024root*>(voidSelf);
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vextend_unit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vextend_unit___024root__trace_full_sub_0(Vextend_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vextend_unit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->instr_i),25);
    bufp->fullCData(oldp+2,(vlSelf->imm_src_i),3);
    bufp->fullIData(oldp+3,(vlSelf->imm_ext_o),32);
    bufp->fullIData(oldp+4,(0x20U),32);
}
