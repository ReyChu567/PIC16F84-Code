// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATAIN_PORTB__SYMS_H_
#define VERILATED_VDATAIN_PORTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdatain_portb.h"

// INCLUDE MODULE CLASSES
#include "Vdatain_portb_.h"

// SYMS CLASS (contains all model state)
class Vdatain_portb__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdatain_portb* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vdatain_portb_                 TOP;

    // CONSTRUCTORS
    Vdatain_portb__Syms(VerilatedContext* contextp, const char* namep, Vdatain_portb* modelp);
    ~Vdatain_portb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
