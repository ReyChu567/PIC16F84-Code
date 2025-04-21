// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPIC16F84_CPU__SYMS_H_
#define VERILATED_VPIC16F84_CPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpic16f84_cpu.h"

// INCLUDE MODULE CLASSES
#include "Vpic16f84_cpu_.h"

// SYMS CLASS (contains all model state)
class Vpic16f84_cpu__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpic16f84_cpu* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vpic16f84_cpu_                 TOP;

    // CONSTRUCTORS
    Vpic16f84_cpu__Syms(VerilatedContext* contextp, const char* namep, Vpic16f84_cpu* modelp);
    ~Vpic16f84_cpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
