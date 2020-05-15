#include "rom_load.h"
#include "utils.h"

int main() {
    BYTE cartridge[MAX_ROM_SIZE];
    load_rom("roms/Tetris.GB", cartridge);
    return 0;
}