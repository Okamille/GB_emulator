#include "rom_load.h"

#include "utils.h"
#include <stdio.h>
#include <string.h>

void load_rom(char* filename, BYTE* data) {
    memset(data, 0, MAX_ROM_SIZE);
    FILE *in;
    in = fopen(filename, "rb");
    fread(data, 1, MAX_ROM_SIZE, in);
    fclose(in);
}