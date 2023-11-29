// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMAIN_DECODER__SYMS_H_
#define VERILATED_VMAIN_DECODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmain_decoder.h"

// INCLUDE MODULE CLASSES
#include "Vmain_decoder___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmain_decoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmain_decoder* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmain_decoder___024root        TOP;

    // CONSTRUCTORS
    Vmain_decoder__Syms(VerilatedContext* contextp, const char* namep, Vmain_decoder* modelp);
    ~Vmain_decoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
