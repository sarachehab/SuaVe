// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vextend_unit.h"
#include "Vextend_unit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vextend_unit::Vextend_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vextend_unit__Syms(contextp(), _vcname__, this)}
    , imm_src_i{vlSymsp->TOP.imm_src_i}
    , instr_i{vlSymsp->TOP.instr_i}
    , imm_ext_o{vlSymsp->TOP.imm_ext_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vextend_unit::Vextend_unit(const char* _vcname__)
    : Vextend_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vextend_unit::~Vextend_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vextend_unit___024root___eval_debug_assertions(Vextend_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vextend_unit___024root___eval_static(Vextend_unit___024root* vlSelf);
void Vextend_unit___024root___eval_initial(Vextend_unit___024root* vlSelf);
void Vextend_unit___024root___eval_settle(Vextend_unit___024root* vlSelf);
void Vextend_unit___024root___eval(Vextend_unit___024root* vlSelf);

void Vextend_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vextend_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vextend_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vextend_unit___024root___eval_static(&(vlSymsp->TOP));
        Vextend_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vextend_unit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vextend_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vextend_unit::eventsPending() { return false; }

uint64_t Vextend_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vextend_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vextend_unit___024root___eval_final(Vextend_unit___024root* vlSelf);

VL_ATTR_COLD void Vextend_unit::final() {
    Vextend_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vextend_unit::hierName() const { return vlSymsp->name(); }
const char* Vextend_unit::modelName() const { return "Vextend_unit"; }
unsigned Vextend_unit::threads() const { return 1; }
void Vextend_unit::prepareClone() const { contextp()->prepareClone(); }
void Vextend_unit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vextend_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vextend_unit___024root__trace_init_top(Vextend_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vextend_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vextend_unit___024root*>(voidSelf);
    Vextend_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vextend_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vextend_unit___024root__trace_register(Vextend_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vextend_unit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vextend_unit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vextend_unit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
