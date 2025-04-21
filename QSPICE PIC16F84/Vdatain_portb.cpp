// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdatain_portb.h"
#include "Vdatain_portb__Syms.h"

//============================================================
// Constructors

Vdatain_portb::Vdatain_portb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vdatain_portb__Syms(_vcontextp__, _vcname__, this))
    , rb0(vlSymsp->TOP.rb0)
    , rb1(vlSymsp->TOP.rb1)
    , rb2(vlSymsp->TOP.rb2)
    , rb3(vlSymsp->TOP.rb3)
    , rb4(vlSymsp->TOP.rb4)
    , rb5(vlSymsp->TOP.rb5)
    , rb6(vlSymsp->TOP.rb6)
    , rb7(vlSymsp->TOP.rb7)
    , data_out(vlSymsp->TOP.data_out)
    , rootp(&(vlSymsp->TOP))
{
}

//Vdatain_portb::Vdatain_portb(const char* _vcname__)
//    : Vdatain_portb(nullptr, _vcname__)
//{
//}

Vdatain_portb::Vdatain_portb(const char* _vcname__)
   : vlSymsp(new Vdatain_portb__Syms(nullptr, _vcname__, this))
   , rb0(vlSymsp->TOP.rb0)
   , rb1(vlSymsp->TOP.rb1)
   , rb2(vlSymsp->TOP.rb2)
   , rb3(vlSymsp->TOP.rb3)
   , rb4(vlSymsp->TOP.rb4)
   , rb5(vlSymsp->TOP.rb5)
   , rb6(vlSymsp->TOP.rb6)
   , rb7(vlSymsp->TOP.rb7)
   , data_out(vlSymsp->TOP.data_out)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vdatain_portb::~Vdatain_portb() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdatain_portb____eval_initial(Vdatain_portb_* vlSelf);
void Vdatain_portb____eval_settle(Vdatain_portb_* vlSelf);
void Vdatain_portb____eval(Vdatain_portb_* vlSelf);
#ifdef VL_DEBUG
void Vdatain_portb____eval_debug_assertions(Vdatain_portb_* vlSelf);
#endif  // VL_DEBUG
void Vdatain_portb____final(Vdatain_portb_* vlSelf);

static void _eval_initial_loop(Vdatain_portb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdatain_portb____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdatain_portb____eval_settle(&(vlSymsp->TOP));
        Vdatain_portb____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdatain_portb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdatain_portb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdatain_portb____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdatain_portb____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdatain_portb::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdatain_portb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdatain_portb::final() {
    Vdatain_portb____final(&(vlSymsp->TOP));
}
