// Automatically generated C++ file on Sun Dec  1 22:33:40 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD pic16f84_cpu_test.cpp Vpic16f84_cpu_test*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vpic16f84_cpu_test.h"

extern "C" __declspec(dllexport) void Destroy(Vpic16f84_cpu_test *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void pic16f84_cpu_test(Vpic16f84_cpu_test **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vpic16f84_cpu_test;
   (*instance)->q1 = data[0].b;
   (*instance)->q2 = data[1].b;
   (*instance)->q3 = data[2].b;
   (*instance)->q4 = data[3].b;
   (*instance)->op_code = data[4].us;
   (*instance)->port_a_data_in = data[5].uc;
   (*instance)->port_b_data_in = data[6].uc;
   (*instance)->mclr = data[7].b;

   (*instance)->eval();

   data[8].us = (*instance)->pc_out;
   data[9].b = (*instance)->nop_out;
   data[10].uc = (*instance)->port_a_tris;
   data[11].uc = (*instance)->port_a_data_out;
   data[12].uc = (*instance)->port_b_tris;
   data[13].uc = (*instance)->port_b_data_out;
   data[14].b = (*instance)->z;
}
