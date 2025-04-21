// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATAINPORTA__SYMS_H_
#define VERILATED_VDATAINPORTA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdatainporta.h"

// INCLUDE MODULE CLASSES
#include "Vdatainporta_.h"

// SYMS CLASS (contains all model state)
class Vdatainporta__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdatainporta* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vdatainporta_                  TOP;

    // CONSTRUCTORS
    Vdatainporta__Syms(VerilatedContext* contextp, const char* namep, Vdatainporta* modelp);
    ~Vdatainporta__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
