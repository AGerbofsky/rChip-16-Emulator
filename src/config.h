

#ifndef CONFIG_H
#define CONFIG_H

#include <inttypes.h>

// General/Global application constants:
#define APPLICATION_WINDOW_TITLE    "rChip-16 Emulator"
#define APPLICATION_AUTHOR_NAME     "Aidan U. Gerbofsky"
#define APPLICATION_REVISION        "===PLACE-HOLDER==="

// Hardware specific constants: general constants
#define BUS_WIDTH_DATA_BIT          16
#define BUS_WIDTH_DATA_VALUE        0xff
#define BUS_WIDTH_INTADDR_BIT       16
#define BUS_WIDTH_INTADDR_VALUE     0xffff
#define BUS_WIDTH_EXTADDR_BIT       24
#define BUS_WIDTH_EXTADDR_VALUE     0xffffff
#define BUS_MAX_CSIG_VALUE          0xffff 

// memory constants
#define MEMORY_MAX_ADDRESSABLE      0xffff // Each data bank is 16-bit.
#define MEMORY_MAX_MEMORY_BANKS     0xff   // The PC can access 0xff banks.

// Memory Explanation:
// This system has a memory architecture that is modeled on the 65816.
// This means that the address bus is actually 16-bits but reserves an
// extra byte for "bank switching". This makes the address bus effectively
// 24-bit, because it is able to access up to 16Mb. Which is very much
// larger than the 16kB available for 16-bit address busses.
//
// Diagram of this Principle:
// memory = [byte][word] or memory = [0xff][0xffff]

// register-file constants
#define REGISTERS_GPR_COUNT         8
#define REGISTERS_ACC_COUNT         2

// Display related constants:
#define RCHIP16_DISPLAY_H           240     // Display is 240px wide.
#define RCHIP16_DISPLAY_W            80     // Display is 80 col.
#define RCHIP16_SCALE_FACTOR         40     // Scale every px by 40.

// Useful typedefinitions:
namespace types
{
    typedef uint8_t    byte;
    typedef uint16_t   word;
};

#endif