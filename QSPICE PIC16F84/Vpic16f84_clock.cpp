// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpic16f84_clock.h"
#include "Vpic16f84_clock__Syms.h"

//============================================================
// Constructors

Vpic16f84_clock::Vpic16f84_clock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vpic16f84_clock__Syms(_vcontextp__, _vcname__, this))
    , clk(vlSymsp->TOP.clk)
    , vdd(vlSymsp->TOP.vdd)
    , vss(vlSymsp->TOP.vss)
    , mclr(vlSymsp->TOP.mclr)
    , q1(vlSymsp->TOP.q1)
    , q2(vlSymsp->TOP.q2)
    , q3(vlSymsp->TOP.q3)
    , q4(vlSymsp->TOP.q4)
    , clk_out(vlSymsp->TOP.clk_out)
    , rootp(&(vlSymsp->TOP))
{
}

//Vpic16f84_clock::Vpic16f84_clock(const char* _vcname__)
//    : Vpic16f84_clock(nullptr, _vcname__)
//{
//}

Vpic16f84_clock::Vpic16f84_clock(const char* _vcname__)
   : vlSymsp(new Vpic16f84_clock__Syms(nullptr, _vcname__, this))
   , clk(vlSymsp->TOP.clk)
   , vdd(vlSymsp->TOP.vdd)
   , vss(vlSymsp->TOP.vss)
   , mclr(vlSymsp->TOP.mclr)
   , q1(vlSymsp->TOP.q1)
   , q2(vlSymsp->TOP.q2)
   , q3(vlSymsp->TOP.q3)
   , q4(vlSymsp->TOP.q4)
   , clk_out(vlSymsp->TOP.clk_out)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vpic16f84_clock::~Vpic16f84_clock() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpic16f84_clock____eval_initial(Vpic16f84_clock_* vlSelf);
void Vpic16f84_clock____eval_settle(Vpic16f84_clock_* vlSelf);
void Vpic16f84_clock____eval(Vpic16f84_clock_* vlSelf);
#ifdef VL_DEBUG
void Vpic16f84_clock____eval_debug_assertions(Vpic16f84_clock_* vlSelf);
#endif  // VL_DEBUG
void Vpic16f84_clock____final(Vpic16f84_clock_* vlSelf);

static void _eval_initial_loop(Vpic16f84_clock__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpic16f84_clock____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpic16f84_clock____eval_settle(&(vlSymsp->TOP));
        Vpic16f84_clock____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vpic16f84_clock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpic16f84_clock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpic16f84_clock____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpic16f84_clock____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vpic16f84_clock::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpic16f84_clock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpic16f84_clock::final() {
    Vpic16f84_clock____final(&(vlSymsp->TOP));
}
