// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file__Syms.h"
#include "Vregister_file___024root.h"

VL_INLINE_OPT void Vregister_file___024root___ico_sequent__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->rd1_o = vlSelf->reg_file__DOT__rf[vlSelf->addr1_i];
    vlSelf->rd2_o = vlSelf->reg_file__DOT__rf[vlSelf->addr2_i];
}

void Vregister_file___024root___eval_ico(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vregister_file___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vregister_file___024root___eval_act(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vregister_file___024root___nba_sequent__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__reg_file__DOT__rf__v0;
    __Vdlyvdim0__reg_file__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__reg_file__DOT__rf__v0;
    __Vdlyvval__reg_file__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__reg_file__DOT__rf__v0;
    __Vdlyvset__reg_file__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__reg_file__DOT__rf__v0 = 0U;
    if (vlSelf->addr3_we_i) {
        __Vdlyvval__reg_file__DOT__rf__v0 = vlSelf->addr3_wd_i;
        __Vdlyvset__reg_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__reg_file__DOT__rf__v0 = vlSelf->addr3_i;
    }
    if (__Vdlyvset__reg_file__DOT__rf__v0) {
        vlSelf->reg_file__DOT__rf[__Vdlyvdim0__reg_file__DOT__rf__v0] 
            = __Vdlyvval__reg_file__DOT__rf__v0;
    }
    vlSelf->rd1_o = vlSelf->reg_file__DOT__rf[vlSelf->addr1_i];
    vlSelf->rd2_o = vlSelf->reg_file__DOT__rf[vlSelf->addr2_i];
}

void Vregister_file___024root___eval_nba(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregister_file___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vregister_file___024root___eval_triggers__ico(Vregister_file___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__ico(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister_file___024root___eval_triggers__act(Vregister_file___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__act(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__nba(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG

void Vregister_file___024root___eval(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vregister_file___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vregister_file___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("register_file.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vregister_file___024root___eval_ico(vlSelf);
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
            Vregister_file___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vregister_file___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("register_file.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vregister_file___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vregister_file___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("register_file.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vregister_file___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vregister_file___024root___eval_debug_assertions(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->addr3_we_i & 0xfeU))) {
        Verilated::overWidthError("addr3_we_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->addr1_i & 0xe0U))) {
        Verilated::overWidthError("addr1_i");}
    if (VL_UNLIKELY((vlSelf->addr2_i & 0xe0U))) {
        Verilated::overWidthError("addr2_i");}
    if (VL_UNLIKELY((vlSelf->addr3_i & 0xe0U))) {
        Verilated::overWidthError("addr3_i");}
}
#endif  // VL_DEBUG
