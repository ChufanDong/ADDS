#ifndef BITFLIP_H_
#define BITFLIP_H_
#include "Mutator.h"
#include <iostream>

class BitFlip:public Mutator
{
    public:
        Individual mutate(Individual ind, int k) override;
        ~BitFlip() override = default;
};

#endif