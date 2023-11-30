// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory__Syms.h"
#include "Vdata_memory___024root.h"

VL_ATTR_COLD void Vdata_memory___024root___eval_static__TOP(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory___024root___eval_static(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_static\n"); );
    // Body
    Vdata_memory___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vdata_memory___024root___eval_static__TOP(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->data_memory__DOT__addr = (1U & ((IData)(vlSelf->byte_op_i)
                                             ? vlSelf->addr_i
                                             : (0xfffffffcU 
                                                & vlSelf->addr_i)));
}

VL_ATTR_COLD void Vdata_memory___024root___eval_initial__TOP(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory___024root___eval_initial(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_initial\n"); );
    // Body
    Vdata_memory___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vdata_memory___024root___eval_initial__TOP(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->data_memory__DOT__data_ram)
                 , 0x10000U, 0x1000aU);
    vlSelf->data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->data_memory__DOT__data_ram[(0x1ffffU 
                                            & vlSelf->data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->data_memory__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vdata_memory___024root___eval_final(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vdata_memory___024root___eval_triggers__stl(Vdata_memory___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__stl(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___eval_stl(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory___024root___eval_settle(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vdata_memory___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vdata_memory___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("data_memory.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vdata_memory___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__stl(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdata_memory___024root___stl_sequent__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0 
        = vlSelf->data_memory__DOT__data_ram[vlSelf->data_memory__DOT__addr];
    vlSelf->rd_o = ((IData)(vlSelf->byte_op_i) ? (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)
                     : ((vlSelf->data_memory__DOT__data_ram
                         [(0x1ffffU & ((IData)(3U) 
                                       + (IData)(vlSelf->data_memory__DOT__addr)))] 
                         << 0x18U) | ((vlSelf->data_memory__DOT__data_ram
                                       [(0x1ffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                       << 0x10U) | 
                                      ((vlSelf->data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + (IData)(vlSelf->data_memory__DOT__addr)))] 
                                        << 8U) | (IData)(vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0)))));
}

VL_ATTR_COLD void Vdata_memory___024root___eval_stl(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vdata_memory___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__ico(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__act(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdata_memory___024root___dump_triggers__nba(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdata_memory___024root___ctor_var_reset(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->we_i = VL_RAND_RESET_I(1);
    vlSelf->byte_op_i = VL_RAND_RESET_I(1);
    vlSelf->addr_i = VL_RAND_RESET_I(32);
    vlSelf->wd_i = VL_RAND_RESET_I(32);
    vlSelf->rd_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_memory__DOT__addr = VL_RAND_RESET_I(1);
    vlSelf->data_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->data_memory__DOT____VdfgTmp_h8d771d4d__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
