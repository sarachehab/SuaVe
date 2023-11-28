// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file__Syms.h"
#include "Vregister_file___024root.h"

VL_ATTR_COLD void Vregister_file___024root___eval_static(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vregister_file___024root___eval_initial__TOP(Vregister_file___024root* vlSelf);

VL_ATTR_COLD void Vregister_file___024root___eval_initial(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_initial\n"); );
    // Body
    Vregister_file___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vregister_file___024root___eval_initial__TOP(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->reg_file__DOT__rf[0U] = 0U;
    vlSelf->reg_file__DOT__rf[1U] = 0U;
    vlSelf->reg_file__DOT__rf[2U] = 0U;
    vlSelf->reg_file__DOT__rf[3U] = 0U;
    vlSelf->reg_file__DOT__rf[4U] = 0U;
    vlSelf->reg_file__DOT__rf[5U] = 0U;
    vlSelf->reg_file__DOT__rf[6U] = 0U;
    vlSelf->reg_file__DOT__rf[7U] = 0U;
    vlSelf->reg_file__DOT__rf[8U] = 0U;
    vlSelf->reg_file__DOT__rf[9U] = 0U;
    vlSelf->reg_file__DOT__rf[0xaU] = 0U;
    vlSelf->reg_file__DOT__rf[0xbU] = 0U;
    vlSelf->reg_file__DOT__rf[0xcU] = 0U;
    vlSelf->reg_file__DOT__rf[0xdU] = 0U;
    vlSelf->reg_file__DOT__rf[0xeU] = 0U;
    vlSelf->reg_file__DOT__rf[0xfU] = 0U;
    vlSelf->reg_file__DOT__rf[0x10U] = 0U;
    vlSelf->reg_file__DOT__rf[0x11U] = 0U;
    vlSelf->reg_file__DOT__rf[0x12U] = 0U;
    vlSelf->reg_file__DOT__rf[0x13U] = 0U;
    vlSelf->reg_file__DOT__rf[0x14U] = 0U;
    vlSelf->reg_file__DOT__rf[0x15U] = 0U;
    vlSelf->reg_file__DOT__rf[0x16U] = 0U;
    vlSelf->reg_file__DOT__rf[0x17U] = 0U;
    vlSelf->reg_file__DOT__rf[0x18U] = 0U;
    vlSelf->reg_file__DOT__rf[0x19U] = 0U;
    vlSelf->reg_file__DOT__rf[0x1aU] = 0U;
    vlSelf->reg_file__DOT__rf[0x1bU] = 0U;
    vlSelf->reg_file__DOT__rf[0x1cU] = 0U;
    vlSelf->reg_file__DOT__rf[0x1dU] = 0U;
    vlSelf->reg_file__DOT__rf[0x1eU] = 0U;
    vlSelf->reg_file__DOT__rf[0x1fU] = 0U;
    vlSelf->reg_file__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vregister_file___024root___eval_final(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vregister_file___024root___eval_triggers__stl(Vregister_file___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__stl(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___eval_stl(Vregister_file___024root* vlSelf);

VL_ATTR_COLD void Vregister_file___024root___eval_settle(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vregister_file___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vregister_file___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("register_file.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vregister_file___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__stl(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vregister_file___024root___ico_sequent__TOP__0(Vregister_file___024root* vlSelf);

VL_ATTR_COLD void Vregister_file___024root___eval_stl(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vregister_file___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__ico(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__act(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregister_file___024root___dump_triggers__nba(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vregister_file___024root___ctor_var_reset(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->addr3_we_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->addr1_i = VL_RAND_RESET_I(5);
    vlSelf->addr2_i = VL_RAND_RESET_I(5);
    vlSelf->addr3_i = VL_RAND_RESET_I(5);
    vlSelf->addr3_wd_i = VL_RAND_RESET_I(32);
    vlSelf->rd1_o = VL_RAND_RESET_I(32);
    vlSelf->rd2_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->reg_file__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
