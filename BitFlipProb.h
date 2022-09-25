#include <iostream>

#include "Mutator.h"

#ifndef _BITFLIPPROB_H
#define _BITFLIPPROB_H

class BitFlipProb : public Mutator{
    private:
        double prob;
    public:
        BitFlipProb(double pro);
        Individual mutate(Individual input, int k) override;
        ~BitFlipProb() override = default;
};
#endif