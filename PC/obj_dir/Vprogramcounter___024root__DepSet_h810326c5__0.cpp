// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprogramcounter.h for the primary calling header

#include "verilated.h"

#include "Vprogramcounter__Syms.h"
#include "Vprogramcounter__Syms.h"
#include "Vprogramcounter___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprogramcounter___024root___dump_triggers__act(Vprogramcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vprogramcounter___024root___eval_triggers__act(Vprogramcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprogramcounter___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vprogramcounter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
