// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpic16f84_cpu.h"
#include "Vpic16f84_cpu__Syms.h"

//============================================================
// Constructors

Vpic16f84_cpu::Vpic16f84_cpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vpic16f84_cpu__Syms(_vcontextp__, _vcname__, this))
    , q1(vlSymsp->TOP.q1)
    , q2(vlSymsp->TOP.q2)
    , q3(vlSymsp->TOP.q3)
    , q4(vlSymsp->TOP.q4)
    , port_a_data_in(vlSymsp->TOP.port_a_data_in)
    , port_b_data_in(vlSymsp->TOP.port_b_data_in)
    , mclr(vlSymsp->TOP.mclr)
    , nop_out(vlSymsp->TOP.nop_out)
    , port_a_tris(vlSymsp->TOP.port_a_tris)
    , port_a_data_out(vlSymsp->TOP.port_a_data_out)
    , port_b_tris(vlSymsp->TOP.port_b_tris)
    , port_b_data_out(vlSymsp->TOP.port_b_data_out)
    , op_code(vlSymsp->TOP.op_code)
    , pc_out(vlSymsp->TOP.pc_out)
    , rootp(&(vlSymsp->TOP))
{
}

//Vpic16f84_cpu::Vpic16f84_cpu(const char* _vcname__)
//    : Vpic16f84_cpu(nullptr, _vcname__)
//{
//}

Vpic16f84_cpu::Vpic16f84_cpu(const char* _vcname__)
   : vlSymsp(new Vpic16f84_cpu__Syms(nullptr, _vcname__, this))
   , q1(vlSymsp->TOP.q1)
   , q2(vlSymsp->TOP.q2)
   , q3(vlSymsp->TOP.q3)
   , q4(vlSymsp->TOP.q4)
   , port_a_data_in(vlSymsp->TOP.port_a_data_in)
   , port_b_data_in(vlSymsp->TOP.port_b_data_in)
   , mclr(vlSymsp->TOP.mclr)
   , nop_out(vlSymsp->TOP.nop_out)
   , port_a_tris(vlSymsp->TOP.port_a_tris)
   , port_a_data_out(vlSymsp->TOP.port_a_data_out)
   , port_b_tris(vlSymsp->TOP.port_b_tris)
   , port_b_data_out(vlSymsp->TOP.port_b_data_out)
   , op_code(vlSymsp->TOP.op_code)
   , pc_out(vlSymsp->TOP.pc_out)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vpic16f84_cpu::~Vpic16f84_cpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpic16f84_cpu____eval_initial(Vpic16f84_cpu_* vlSelf);
void Vpic16f84_cpu____eval_settle(Vpic16f84_cpu_* vlSelf);
void Vpic16f84_cpu____eval(Vpic16f84_cpu_* vlSelf);
QData Vpic16f84_cpu____change_request(Vpic16f84_cpu_* vlSelf);
#ifdef VL_DEBUG
void Vpic16f84_cpu____eval_debug_assertions(Vpic16f84_cpu_* vlSelf);
#endif  // VL_DEBUG
void Vpic16f84_cpu____final(Vpic16f84_cpu_* vlSelf);

static void _eval_initial_loop(Vpic16f84_cpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpic16f84_cpu____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpic16f84_cpu____eval_settle(&(vlSymsp->TOP));
        Vpic16f84_cpu____eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpic16f84_cpu____change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pic16f84_cpu.v", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpic16f84_cpu____change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vpic16f84_cpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpic16f84_cpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpic16f84_cpu____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpic16f84_cpu____eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vpic16f84_cpu____change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("pic16f84_cpu.v", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vpic16f84_cpu____change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vpic16f84_cpu::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vpic16f84_cpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpic16f84_cpu::final() {
    Vpic16f84_cpu____final(&(vlSymsp->TOP));
}
