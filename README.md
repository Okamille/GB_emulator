# GameBoy Emulator

This emulator is for educational purposes, the documentation on which it is based is from

* http://marc.rawer.de/Gameboy/Docs/GBCPUman.pdf

## Memory architecture

* 0x0000 - 0x3FFF : ROM Bank #0
* 0x4000 - 0x7FFF : Switchable ROM Bank
* 0x8000 - 0x9FFF : Video RAM
* 0xA000 - 0xBFFF : Switchable RAM Bank
* 0xC000 - 0xDFFF : Internal RAM
* 0xE000 - 0xFDFF : Echo of internal RAM
* 0xFE00 - 0xFE9F : Sprite Attribution Memory
* 0xFEA0 - 0xFEFF : Empty (unsuable for I/O)
* 0xFF00 - 0xFF4B : I/O Ports
* 0xFF4C - 0xFF7F : Empty (unsuable for I/O)
* 0xFF80 - 0xFFFF : Internal RAM