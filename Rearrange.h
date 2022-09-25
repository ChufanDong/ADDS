#ifndef REARRANGE_H_
#define REARRANGE_H_
#include "Mutator.h"
#include <iostream>

class Rearrange : public Mutator
{
    public:
        Individual mutate(Individual ind, int k) override;
         ~Rearrange() override = default;
};

#endif