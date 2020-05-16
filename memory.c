#include "memory.h"

void write_memory(WORD address, BYTE data, BYTE* rom) {
    if (address < 0x8000) {
        printf("Trying to access read-only memory");
    } else if (( address >= 0xE000 ) && (address < 0xFE00)) {
        rom[address] = data;
        write_memory(address - 0x2000, data, rom);
    } else if (( address >= 0xFEA0 ) && (address < 0xFEFF) ){
        printf("Trying to access restricted memory");
    } else {
        rom[address] = data; 
    }
}