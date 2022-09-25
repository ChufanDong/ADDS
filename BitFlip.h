#include <iostream>

#include "Mutator.h"

#ifndef _BITFLIP_H
#define _BITFLIP_H

class BitFlip:public Mutator{
    public:
        Individual mutate(Individual input, int k) override;
        ~BitFlip() override = default;
};
#endif