
#ifndef CPU_H
#define CPU_H

#include <memory>

#include "config.h"
#include "control.h"
#include "memory.h"

class cpu
{

    using namespace::types;

    union
    {
        struct gpr
        {
            word data;      // This is the data to be stored in the register.
        }R[REGISTERS_GPR_COUNT];

        struct acc
        {
            word data;
            bool wEnable;   // Enables the two accumulators to be mux'd into
        }A[REGISTERS_ACC_COUNT];

    };

};

// Class constructor/destructor definitions here.
cpu::rfile();
cpu::~rfile();

#endif