// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_out_port_b.h for the primary calling header

#ifndef VERILATED_VDATA_OUT_PORT_B__H_
#define VERILATED_VDATA_OUT_PORT_B__H_  // guard

#include "verilated.h"

class Vdata_out_port_b__Syms;
VL_MODULE(Vdata_out_port_b_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data_in,7,0);
    VL_OUT8(rb0,0,0);
    VL_OUT8(rb1,0,0);
    VL_OUT8(rb2,0,0);
    VL_OUT8(rb3,0,0);
    VL_OUT8(rb4,0,0);
    VL_OUT8(rb5,0,0);
    VL_OUT8(rb6,0,0);
    VL_OUT8(rb7,0,0);

    // INTERNAL VARIABLES
    Vdata_out_port_b__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_out_port_b_(Vdata_out_port_b__Syms* symsp, const char* name);
    ~Vdata_out_port_b_();
    VL_UNCOPYABLE(Vdata_out_port_b_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
