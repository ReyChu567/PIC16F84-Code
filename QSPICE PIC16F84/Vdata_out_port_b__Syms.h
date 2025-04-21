// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDATA_OUT_PORT_B__SYMS_H_
#define VERILATED_VDATA_OUT_PORT_B__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdata_out_port_b.h"

// INCLUDE MODULE CLASSES
#include "Vdata_out_port_b_.h"

// SYMS CLASS (contains all model state)
class Vdata_out_port_b__Syms /* final */ : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdata_out_port_b* const __Vm_modelp;
    bool __Vm_didInit;// = false;

    // MODULE INSTANCE STATE
    Vdata_out_port_b_              TOP;

    // CONSTRUCTORS
    Vdata_out_port_b__Syms(VerilatedContext* contextp, const char* namep, Vdata_out_port_b* modelp);
    ~Vdata_out_port_b__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
