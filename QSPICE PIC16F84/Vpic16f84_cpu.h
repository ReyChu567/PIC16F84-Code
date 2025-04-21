// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPIC16F84_CPU_H_
#define VERILATED_VPIC16F84_CPU_H_  // guard

#include "verilated.h"

class Vpic16f84_cpu__Syms;
class Vpic16f84_cpu_;

// This class is the main interface to the Verilated model
class Vpic16f84_cpu VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vpic16f84_cpu__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&q1,0,0);
    VL_IN8(&q2,0,0);
    VL_IN8(&q3,0,0);
    VL_IN8(&q4,0,0);
    VL_IN8(&port_a_data_in,4,0);
    VL_IN8(&port_b_data_in,7,0);
    VL_IN8(&mclr,0,0);
    VL_OUT8(&nop_out,0,0);
    VL_OUT8(&port_a_tris,4,0);
    VL_OUT8(&port_a_data_out,4,0);
    VL_OUT8(&port_b_tris,7,0);
    VL_OUT8(&port_b_data_out,7,0);
    VL_IN16(&op_code,13,0);
    VL_OUT16(&pc_out,12,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vpic16f84_cpu_* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vpic16f84_cpu(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vpic16f84_cpu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vpic16f84_cpu();
  private:
    VL_UNCOPYABLE(Vpic16f84_cpu);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
