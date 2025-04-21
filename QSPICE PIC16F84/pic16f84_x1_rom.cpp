// Automatically generated C++ file on Sat Nov 30 21:05:42 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD pic16f84_x1_rom.cpp Vpic16f84_x1_rom*.cpp verilated.lib kernel32.lib
//
// The intended design of the Verilog interface is such that this
// file should not need editing unless you change the symbol.

#include <verilated.h>
#include "Vpic16f84_x1_rom.h"

extern "C" __declspec(dllexport) void Destroy(Vpic16f84_x1_rom *instance)
{
   if(instance)
      delete(instance);
}

extern "C" __declspec(dllexport) void pic16f84_x1_rom(Vpic16f84_x1_rom **instance, double t, union uData *data)
{
   if(!*instance)
      *instance = new Vpic16f84_x1_rom;
   (*instance)->pc_in = data[0].us;
   (*instance)->q1 = data[1].b;
   (*instance)->nop_in = data[2].b;

   (*instance)->eval();

   data[3].us = (*instance)->inst;
}
