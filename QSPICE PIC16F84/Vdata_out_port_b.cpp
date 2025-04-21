// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_out_port_b.h"
#include "Vdata_out_port_b__Syms.h"

//============================================================
// Constructors

Vdata_out_port_b::Vdata_out_port_b(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vdata_out_port_b__Syms(_vcontextp__, _vcname__, this))
    , data_in(vlSymsp->TOP.data_in)
    , rb0(vlSymsp->TOP.rb0)
    , rb1(vlSymsp->TOP.rb1)
    , rb2(vlSymsp->TOP.rb2)
    , rb3(vlSymsp->TOP.rb3)
    , rb4(vlSymsp->TOP.rb4)
    , rb5(vlSymsp->TOP.rb5)
    , rb6(vlSymsp->TOP.rb6)
    , rb7(vlSymsp->TOP.rb7)
    , rootp(&(vlSymsp->TOP))
{
}

//Vdata_out_port_b::Vdata_out_port_b(const char* _vcname__)
//    : Vdata_out_port_b(nullptr, _vcname__)
//{
//}

Vdata_out_port_b::Vdata_out_port_b(const char* _vcname__)
   : vlSymsp(new Vdata_out_port_b__Syms(nullptr, _vcname__, this))
   , data_in(vlSymsp->TOP.data_in)
   , rb0(vlSymsp->TOP.rb0)
   , rb1(vlSymsp->TOP.rb1)
   , rb2(vlSymsp->TOP.rb2)
   , rb3(vlSymsp->TOP.rb3)
   , rb4(vlSymsp->TOP.rb4)
   , rb5(vlSymsp->TOP.rb5)
   , rb6(vlSymsp->TOP.rb6)
   , rb7(vlSymsp->TOP.rb7)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vdata_out_port_b::~Vdata_out_port_b() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdata_out_port_b____eval_initial(Vdata_out_port_b_* vlSelf);
void Vdata_out_port_b____eval_settle(Vdata_out_port_b_* vlSelf);
void Vdata_out_port_b____eval(Vdata_out_port_b_* vlSelf);
#ifdef VL_DEBUG
void Vdata_out_port_b____eval_debug_assertions(Vdata_out_port_b_* vlSelf);
#endif  // VL_DEBUG
void Vdata_out_port_b____final(Vdata_out_port_b_* vlSelf);

static void _eval_initial_loop(Vdata_out_port_b__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdata_out_port_b____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdata_out_port_b____eval_settle(&(vlSymsp->TOP));
        Vdata_out_port_b____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdata_out_port_b::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_out_port_b::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_out_port_b____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdata_out_port_b____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdata_out_port_b::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdata_out_port_b::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdata_out_port_b::final() {
    Vdata_out_port_b____final(&(vlSymsp->TOP));
}
