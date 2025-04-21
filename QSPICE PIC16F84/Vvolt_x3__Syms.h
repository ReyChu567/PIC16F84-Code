// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVOLT_X3__SYMS_H_
#define VERILATED_VVOLT_X3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vvolt_x3.h"

// INCLUDE MODULE CLASSES
#include "Vvolt_x3_.h"

// SYMS CLASS (contains all model state)
class Vvolt_x3__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vvolt_x3* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vvolt_x3_                      TOP;

    // CONSTRUCTORS
    Vvolt_x3__Syms(VerilatedContext* contextp, const char* namep, Vvolt_x3* modelp);
    ~Vvolt_x3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
