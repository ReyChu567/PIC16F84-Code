// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPORT_B_TRIS__SYMS_H_
#define VERILATED_VPORT_B_TRIS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vport_b_tris.h"

// INCLUDE MODULE CLASSES
#include "Vport_b_tris_.h"

// SYMS CLASS (contains all model state)
class Vport_b_tris__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vport_b_tris* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vport_b_tris_                  TOP;

    // CONSTRUCTORS
    Vport_b_tris__Syms(VerilatedContext* contextp, const char* namep, Vport_b_tris* modelp);
    ~Vport_b_tris__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
