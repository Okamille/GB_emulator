#ifndef REGISTERS_H
#define REGISTERS_H

#include "utils.h"

// Registers in CPU

union Register
{
    WORD reg;
    struct
    {
        BYTE lo;
        BYTE hi;
    };
    
};

#endif