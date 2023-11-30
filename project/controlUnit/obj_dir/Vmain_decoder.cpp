// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmain_decoder.h"
#include "Vmain_decoder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmain_decoder::Vmain_decoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmain_decoder__Syms(contextp(), _vcname__, this)}
    , op_i{vlSymsp->TOP.op_i}
    , branch_o{vlSymsp->TOP.branch_o}
    , jump_o{vlSymsp->TOP.jump_o}
    , result_src_o{vlSymsp->TOP.result_src_o}
    , mem_write_o{vlSymsp->TOP.mem_write_o}
    , alu_src_o{vlSymsp->TOP.alu_src_o}
    , imm_src_o{vlSymsp->TOP.imm_src_o}
    , reg_write_o{vlSymsp->TOP.reg_write_o}
    , alu_op_o{vlSymsp->TOP.alu_op_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmain_decoder::Vmain_decoder(const char* _vcname__)
    : Vmain_decoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmain_decoder::~Vmain_decoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmain_decoder___024root___eval_debug_assertions(Vmain_decoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_decoder___024root___eval_static(Vmain_decoder___024root* vlSelf);
void Vmain_decoder___024root___eval_initial(Vmain_decoder___024root* vlSelf);
void Vmain_decoder___024root___eval_settle(Vmain_decoder___024root* vlSelf);
void Vmain_decoder___024root___eval(Vmain_decoder___024root* vlSelf);

void Vmain_decoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain_decoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmain_decoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmain_decoder___024root___eval_static(&(vlSymsp->TOP));
        Vmain_decoder___024root___eval_initial(&(vlSymsp->TOP));
        Vmain_decoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmain_decoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmain_decoder::eventsPending() { return false; }

uint64_t Vmain_decoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmain_decoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmain_decoder___024root___eval_final(Vmain_decoder___024root* vlSelf);

VL_ATTR_COLD void Vmain_decoder::final() {
    Vmain_decoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmain_decoder::hierName() const { return vlSymsp->name(); }
const char* Vmain_decoder::modelName() const { return "Vmain_decoder"; }
unsigned Vmain_decoder::threads() const { return 1; }
void Vmain_decoder::prepareClone() const { contextp()->prepareClone(); }
void Vmain_decoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmain_decoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmain_decoder___024root__trace_init_top(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmain_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_decoder___024root*>(voidSelf);
    Vmain_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmain_decoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmain_decoder___024root__trace_register(Vmain_decoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain_decoder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmain_decoder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmain_decoder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
