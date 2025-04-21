// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vport_out_x1.h for the primary calling header

#ifndef VERILATED_VPORT_OUT_X1__H_
#define VERILATED_VPORT_OUT_X1__H_  // guard

#include "verilated.h"

class Vport_out_x1__Syms;
VL_MODULE(Vport_out_x1_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(tris_stat,0,0);
    VL_IN8(data_out,0,0);
    VL_OUT8(out,0,0);

    // INTERNAL VARIABLES
    Vport_out_x1__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vport_out_x1_(Vport_out_x1__Syms* symsp, const char* name);
    ~Vport_out_x1_();
    VL_UNCOPYABLE(Vport_out_x1_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
