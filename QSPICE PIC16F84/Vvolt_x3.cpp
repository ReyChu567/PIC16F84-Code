// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvolt_x3.h"
#include "Vvolt_x3__Syms.h"

//============================================================
// Constructors

Vvolt_x3::Vvolt_x3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vvolt_x3__Syms(_vcontextp__, _vcname__, this))
    , vdd(vlSymsp->TOP.vdd)
    , in(vlSymsp->TOP.in)
    , mclr(vlSymsp->TOP.mclr)
    , q1(vlSymsp->TOP.q1)
    , out(vlSymsp->TOP.out)
    , rootp(&(vlSymsp->TOP))
{
}

//Vvolt_x3::Vvolt_x3(const char* _vcname__)
//    : Vvolt_x3(nullptr, _vcname__)
//{
//}

Vvolt_x3::Vvolt_x3(const char* _vcname__)
   : vlSymsp(new Vvolt_x3__Syms(nullptr, _vcname__, this))
   , vdd(vlSymsp->TOP.vdd)
   , in(vlSymsp->TOP.in)
   , mclr(vlSymsp->TOP.mclr)
   , q1(vlSymsp->TOP.q1)
   , out(vlSymsp->TOP.out)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vvolt_x3::~Vvolt_x3() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvolt_x3____eval_initial(Vvolt_x3_* vlSelf);
void Vvolt_x3____eval_settle(Vvolt_x3_* vlSelf);
void Vvolt_x3____eval(Vvolt_x3_* vlSelf);
#ifdef VL_DEBUG
void Vvolt_x3____eval_debug_assertions(Vvolt_x3_* vlSelf);
#endif  // VL_DEBUG
void Vvolt_x3____final(Vvolt_x3_* vlSelf);

static void _eval_initial_loop(Vvolt_x3__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvolt_x3____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvolt_x3____eval_settle(&(vlSymsp->TOP));
        Vvolt_x3____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vvolt_x3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvolt_x3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvolt_x3____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvolt_x3____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vvolt_x3::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvolt_x3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vvolt_x3::final() {
    Vvolt_x3____final(&(vlSymsp->TOP));
}
