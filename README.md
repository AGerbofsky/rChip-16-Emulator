# rChip-16-Emulator

Aidan U. Gerbofsky
06/09/21


Project Description:
  This is an emulation project that I have started in-order to combine the concepts that I have learned through various books and online courses 
  on topics such as emulation, compilers and interpreters, and computer orgainization and architecture, into a complex emulator that simulates every
  aspect of a computer from the CPU to the GFX chip, all the way down to the Control Unit, bus architecture, as well as microcode and machine instructions.

About the System - CPU:
  The CPU is a software implementation of a microarchitecture that I am developing at the the moment. This is what I call the Rishon 80x16 Microarchitecture.
  Below are the features of the Rishon 80x16 microarchitecture:
      Register File:
       - 16 x 16-bit General-purpose Registers, R0-RF.
       - 2 x 16-bit Accumulators which can be mux'd into a single 32-bit Accumulator (A0-A1 or Aw, where "w" stands for "wide").
       - 24-bit Program Counter. The LSB is used to select the memory bank, while the remaining word contains the memory address at that memory bank.
       - A 64-word deep STACK.
