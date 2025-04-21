// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIC16F84_CLOCK__SYMS_H_
#define VERILATED_VPIC16F84_CLOCK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpic16f84_clock.h"

// INCLUDE MODULE CLASSES
#include "Vpic16f84_clock_.h"

// SYMS CLASS (contains all model state)
class Vpic16f84_clock__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpic16f84_clock* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vpic16f84_clock_               TOP;

    // CONSTRUCTORS
    Vpic16f84_clock__Syms(VerilatedContext* contextp, const char* namep, Vpic16f84_clock* modelp);
    ~Vpic16f84_clock__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
