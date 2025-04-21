// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vport_b_tris.h"
#include "Vport_b_tris__Syms.h"

//============================================================
// Constructors

Vport_b_tris::Vport_b_tris(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vport_b_tris__Syms(_vcontextp__, _vcname__, this))
    , tris_val(vlSymsp->TOP.tris_val)
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

//Vport_b_tris::Vport_b_tris(const char* _vcname__)
//    : Vport_b_tris(nullptr, _vcname__)
//{
//}

Vport_b_tris::Vport_b_tris(const char* _vcname__)
   : vlSymsp(new Vport_b_tris__Syms(nullptr, _vcname__, this))
   , tris_val(vlSymsp->TOP.tris_val)
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

Vport_b_tris::~Vport_b_tris() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vport_b_tris____eval_initial(Vport_b_tris_* vlSelf);
void Vport_b_tris____eval_settle(Vport_b_tris_* vlSelf);
void Vport_b_tris____eval(Vport_b_tris_* vlSelf);
#ifdef VL_DEBUG
void Vport_b_tris____eval_debug_assertions(Vport_b_tris_* vlSelf);
#endif  // VL_DEBUG
void Vport_b_tris____final(Vport_b_tris_* vlSelf);

static void _eval_initial_loop(Vport_b_tris__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vport_b_tris____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vport_b_tris____eval_settle(&(vlSymsp->TOP));
        Vport_b_tris____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vport_b_tris::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vport_b_tris::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vport_b_tris____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vport_b_tris____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vport_b_tris::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vport_b_tris::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vport_b_tris::final() {
    Vport_b_tris____final(&(vlSymsp->TOP));
}
