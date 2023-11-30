// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_decoder.h for the primary calling header

#include "verilated.h"

#include "Vmain_decoder__Syms.h"
#include "Vmain_decoder___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vmain_decoder__ConstPool__TABLE_h524972ea_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain_decoder__ConstPool__TABLE_h246ec891_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain_decoder__ConstPool__TABLE_ha601f407_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain_decoder__ConstPool__TABLE_hae527aed_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain_decoder__ConstPool__TABLE_h8f6acbfc_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain_decoder__ConstPool__TABLE_h5a39c6bc_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vmain_decoder__ConstPool__TABLE_hb4296301_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vmain_decoder__ConstPool__TABLE_h78f2d6f9_0;

VL_INLINE_OPT void Vmain_decoder___024root___ico_sequent__TOP__0(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->op_i;
    vlSelf->reg_write_o = Vmain_decoder__ConstPool__TABLE_h524972ea_0
        [__Vtableidx1];
    vlSelf->imm_src_o = Vmain_decoder__ConstPool__TABLE_h246ec891_0
        [__Vtableidx1];
    vlSelf->alu_src_o = Vmain_decoder__ConstPool__TABLE_ha601f407_0
        [__Vtableidx1];
    vlSelf->mem_write_o = Vmain_decoder__ConstPool__TABLE_hae527aed_0
        [__Vtableidx1];
    vlSelf->result_src_o = Vmain_decoder__ConstPool__TABLE_h8f6acbfc_0
        [__Vtableidx1];
    vlSelf->branch_o = Vmain_decoder__ConstPool__TABLE_h5a39c6bc_0
        [__Vtableidx1];
    vlSelf->alu_op_o = Vmain_decoder__ConstPool__TABLE_hb4296301_0
        [__Vtableidx1];
    vlSelf->jump_o = Vmain_decoder__ConstPool__TABLE_h78f2d6f9_0
        [__Vtableidx1];
}

void Vmain_decoder___024root___eval_ico(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vmain_decoder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmain_decoder___024root___eval_act(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_act\n"); );
}

void Vmain_decoder___024root___eval_nba(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_nba\n"); );
}

void Vmain_decoder___024root___eval_triggers__ico(Vmain_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_decoder___024root___dump_triggers__ico(Vmain_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_decoder___024root___eval_triggers__act(Vmain_decoder___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_decoder___024root___dump_triggers__act(Vmain_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_decoder___024root___dump_triggers__nba(Vmain_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain_decoder___024root___eval(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmain_decoder___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmain_decoder___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("main_decoder.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmain_decoder___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vmain_decoder___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmain_decoder___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("main_decoder.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vmain_decoder___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmain_decoder___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("main_decoder.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmain_decoder___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmain_decoder___024root___eval_debug_assertions(Vmain_decoder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_decoder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->op_i & 0x80U))) {
        Verilated::overWidthError("op_i");}
}
#endif  // VL_DEBUG
