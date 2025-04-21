// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpic16f84_x1_rom.h"
#include "Vpic16f84_x1_rom__Syms.h"

//============================================================
// Constructors

Vpic16f84_x1_rom::Vpic16f84_x1_rom(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vpic16f84_x1_rom__Syms(_vcontextp__, _vcname__, this))
    , q1(vlSymsp->TOP.q1)
    , nop_in(vlSymsp->TOP.nop_in)
    , pc_in(vlSymsp->TOP.pc_in)
    , inst(vlSymsp->TOP.inst)
    , rootp(&(vlSymsp->TOP))
{
}

//Vpic16f84_x1_rom::Vpic16f84_x1_rom(const char* _vcname__)
//    : Vpic16f84_x1_rom(nullptr, _vcname__)
//{
//}

Vpic16f84_x1_rom::Vpic16f84_x1_rom(const char* _vcname__)
   : vlSymsp(new Vpic16f84_x1_rom__Syms(nullptr, _vcname__, this))
   , q1(vlSymsp->TOP.q1)
   , nop_in(vlSymsp->TOP.nop_in)
   , pc_in(vlSymsp->TOP.pc_in)
   , inst(vlSymsp->TOP.inst)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vpic16f84_x1_rom::~Vpic16f84_x1_rom() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpic16f84_x1_rom____eval_initial(Vpic16f84_x1_rom_* vlSelf);
void Vpic16f84_x1_rom____eval_settle(Vpic16f84_x1_rom_* vlSelf);
void Vpic16f84_x1_rom____eval(Vpic16f84_x1_rom_* vlSelf);
#ifdef VL_DEBUG
void Vpic16f84_x1_rom____eval_debug_assertions(Vpic16f84_x1_rom_* vlSelf);
#endif  // VL_DEBUG
void Vpic16f84_x1_rom____final(Vpic16f84_x1_rom_* vlSelf);

static void _eval_initial_loop(Vpic16f84_x1_rom__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpic16f84_x1_rom____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpic16f84_x1_rom____eval_settle(&(vlSymsp->TOP));
        Vpic16f84_x1_rom____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vpic16f84_x1_rom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpic16f84_x1_rom::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpic16f84_x1_rom____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpic16f84_x1_rom____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vpic16f84_x1_rom::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpic16f84_x1_rom::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpic16f84_x1_rom::final() {
    Vpic16f84_x1_rom____final(&(vlSymsp->TOP));
}
