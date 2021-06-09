
#ifndef MEMORY_H
#define MEMORY_H

#include <memory.h>

#include "config.h"
#include "control.h"
#include "cpu.h"

// Memory Classes:
class memory
{
    using namespace::types;

    union
    {
        word eAddr_buss[MEMORY_MAX_MEMORY_BANKS][MEMORY_MAX_MEMORY_BANKS];

        struct STACK
        {

        };

        struct pstore
        {

        };

        struct ram
        {

        };

        struct rom
        {

        };

        struct crom
        {

        };

        struct pmem
        {

        };
    };
};

#endif