/**
  * @brief CPU emulation class
  * @author Samuel D. Villegas
  */
#ifndef CPU_H
#define CPU_H

#include "Clock.h"

typedef unsigned char byte;

/**
 * @brief The CPU class represents the emulated CPU
 */
class CPU {
public:
    CPU();

    int init();

    int emulateCycle();

private:
    Clock clock;
    //byte address_bus;
    byte data_bus;
    byte A; // A register
    byte B; // B register
//    unsigned short opcode;
//    byte memory[4096]; // 4k memory = 4096
//    byte V[16];    // general purpose registers
//    unsigned short I;   // index register
//    unsigned short pc;  // program counter
//    byte gfx[64 * 32]; // 2048 pixels graphics
//    byte delay_timer;
//    byte sound_timer;
//    unsigned short stack[16];   // 16-level stack
//    unsigned short sp;  // stack pointer
//    byte key[16];  // hex keypad: stores current state of the key
};

#endif // CPU_H
