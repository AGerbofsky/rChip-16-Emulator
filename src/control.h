

#ifndef CONTROL_H
#define CONTROL_H

#include "config.h"

class cu
{

    byte control_bus[BUS_MAX_CSIG_VALUE];

    using namespace::types;

    // Control registers
    union creg
    {
        struct ir
        {
            word opcode;
            bool wProtect;
            bool iFlush;
        };

        struct mar
        {
            word address;
            bool wProtect;
            bool iFlush;
        };

        struct sp
        {
            word stkaddr = memory::STACK.topOfStack();
            bool
        };

        union areg
        {
            word address;
            byte bank;

            struct pc
            {
                word eAddr[bank][address]; // This 2d array will hold the "effective address"    
                bool wProtect   // This flag toggles address write protection.
                bool aFlush     // This flag toggles the flush address to STACK signal
                bool jFlag;     // This flag toggles the jump to address signal.
            };

        };
    };

};

#endif