// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpc__Syms.h"


VL_ATTR_COLD void Vpc___024root__trace_init_sub__TOP__0(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"jump_taken_i", false,-1);
    tracep->declBit(c+3,"rst_i", false,-1);
    tracep->declBit(c+4,"jalr_instr_i", false,-1);
    tracep->declBus(c+5,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+6,"jta_jalr_i", false,-1, 31,0);
    tracep->declBus(c+7,"pc_o", false,-1, 31,0);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+9,"PC_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk_i", false,-1);
    tracep->declBit(c+2,"jump_taken_i", false,-1);
    tracep->declBit(c+3,"rst_i", false,-1);
    tracep->declBit(c+4,"jalr_instr_i", false,-1);
    tracep->declBus(c+5,"imm_ext_i", false,-1, 31,0);
    tracep->declBus(c+6,"jta_jalr_i", false,-1, 31,0);
    tracep->declBus(c+7,"pc_o", false,-1, 31,0);
    tracep->declBus(c+8,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpc___024root__trace_init_top(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_init_top\n"); );
    // Body
    Vpc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpc___024root__trace_register(Vpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpc___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpc___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpc___024root__trace_full_sub_0(Vpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpc___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_full_top_0\n"); );
    // Init
    Vpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc___024root*>(voidSelf);
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpc___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpc___024root__trace_full_sub_0(Vpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->jump_taken_i));
    bufp->fullBit(oldp+3,(vlSelf->rst_i));
    bufp->fullBit(oldp+4,(vlSelf->jalr_instr_i));
    bufp->fullIData(oldp+5,(vlSelf->imm_ext_i),32);
    bufp->fullIData(oldp+6,(vlSelf->jta_jalr_i),32);
    bufp->fullIData(oldp+7,(vlSelf->pc_o),32);
    bufp->fullIData(oldp+8,(vlSelf->pc__DOT__pc_next),32);
    bufp->fullIData(oldp+9,(0x20U),32);
}
