// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc__Syms.h"
#include "Vpc___024root.h"

void Vpc___024root___ctor_var_reset(Vpc___024root* vlSelf);

Vpc___024root::Vpc___024root(Vpc__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpc___024root___ctor_var_reset(this);
}

void Vpc___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vpc___024root::~Vpc___024root() {
}
