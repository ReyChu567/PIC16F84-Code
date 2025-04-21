// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_out_port_a.h for the primary calling header

#ifndef VERILATED_VDATA_OUT_PORT_A__H_
#define VERILATED_VDATA_OUT_PORT_A__H_  // guard

#include "verilated.h"

class Vdata_out_port_a__Syms;
VL_MODULE(Vdata_out_port_a_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(data_in,4,0);
    VL_OUT8(ra0,0,0);
    VL_OUT8(ra1,0,0);
    VL_OUT8(ra2,0,0);
    VL_OUT8(ra3,0,0);
    VL_OUT8(ra4,0,0);

    // INTERNAL VARIABLES
    Vdata_out_port_a__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_out_port_a_(Vdata_out_port_a__Syms* symsp, const char* name);
    ~Vdata_out_port_a_();
    VL_UNCOPYABLE(Vdata_out_port_a_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
