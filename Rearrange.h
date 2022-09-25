#include <iostream>

#include "Mutator.h"

#ifndef _REARRANGE_H
#define _REARRANGE_H

class Rearrange : public Mutator{
    public:
        Individual mutate(Individual input, int k) override;
        ~Rearrange() override = default;
};
#endif