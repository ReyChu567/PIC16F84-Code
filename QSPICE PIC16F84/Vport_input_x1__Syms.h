// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPORT_INPUT_X1__SYMS_H_
#define VERILATED_VPORT_INPUT_X1__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vport_input_x1.h"

// INCLUDE MODULE CLASSES
#include "Vport_input_x1_.h"

// SYMS CLASS (contains all model state)
class Vport_input_x1__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vport_input_x1* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vport_input_x1_                TOP;

    // CONSTRUCTORS
    Vport_input_x1__Syms(VerilatedContext* contextp, const char* namep, Vport_input_x1* modelp);
    ~Vport_input_x1__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
