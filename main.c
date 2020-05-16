#include "rom_load.h"
#include "utils.h"
#include "bootrom.h"

#include <stdio.h>

void updateOneFrame() {
    int currentCycles = 0;
    while (currentCycles < MAX_PER_CYCLES) {
        //TODO : access memory to read next opcode
        // currentCycles += opcodeCycles;
    }
}

int main() {
    BYTE cartridge[MAX_ROM_SIZE];
    load_rom("roms/Tetris.GB", cartridge);

    updateOneFrame();

    return 0;
}