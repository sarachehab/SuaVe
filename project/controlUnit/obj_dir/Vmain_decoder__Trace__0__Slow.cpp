// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_decoder__Syms.h"


VL_ATTR_COLD void Vmain_decoder___024root__trace_init_sub__TOP__0(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"op_i", false,-1, 6,0);
    tracep->declBit(c+2,"branch_o", false,-1);
    tracep->declBit(c+3,"jump_o", false,-1);
    tracep->declBus(c+4,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+5,"mem_write_o", false,-1);
    tracep->declBit(c+6,"alu_src_o", false,-1);
    tracep->declBus(c+7,"imm_src_o", false,-1, 1,0);
    tracep->declBit(c+8,"reg_write_o", false,-1);
    tracep->declBus(c+9,"alu_op_o", false,-1, 1,0);
    tracep->pushNamePrefix("mainDecoder ");
    tracep->declBus(c+1,"op_i", false,-1, 6,0);
    tracep->declBit(c+2,"branch_o", false,-1);
    tracep->declBit(c+3,"jump_o", false,-1);
    tracep->declBus(c+4,"result_src_o", false,-1, 1,0);
    tracep->declBit(c+5,"mem_write_o", false,-1);
    tracep->declBit(c+6,"alu_src_o", false,-1);
    tracep->declBus(c+7,"imm_src_o", false,-1, 1,0);
    tracep->declBit(c+8,"reg_write_o", false,-1);
    tracep->declBus(c+9,"alu_op_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_init_top(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_init_top\n"); );
    // Body
    Vmain_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmain_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmain_decoder___024root__trace_register(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmain_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmain_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmain_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_full_top_0\n"); );
    // Init
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmain_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_full_sub_0(Vmain_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->op_i),7);
    bufp->fullBit(oldp+2,(vlSelf->branch_o));
    bufp->fullBit(oldp+3,(vlSelf->jump_o));
    bufp->fullCData(oldp+4,(vlSelf->result_src_o),2);
    bufp->fullBit(oldp+5,(vlSelf->mem_write_o));
    bufp->fullBit(oldp+6,(vlSelf->alu_src_o));
    bufp->fullCData(oldp+7,(vlSelf->imm_src_o),2);
    bufp->fullBit(oldp+8,(vlSelf->reg_write_o));
    bufp->fullCData(oldp+9,(vlSelf->alu_op_o),2);
}
