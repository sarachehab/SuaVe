// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatapath.h for the primary calling header

#include "verilated.h"

#include "Vdatapath__Syms.h"
#include "Vdatapath___024root.h"

void Vdatapath___024root___ctor_var_reset(Vdatapath___024root* vlSelf);

Vdatapath___024root::Vdatapath___024root(Vdatapath__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vdatapath___024root___ctor_var_reset(this);
}

void Vdatapath___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vdatapath___024root::~Vdatapath___024root() {
}
