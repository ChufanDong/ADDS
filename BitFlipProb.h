#ifndef BITFLIPPROB_H_
#define BITFLIPPROB_H_
#include "Mutator.h"
#include <iostream>

class BitFlipProb : public Mutator
{
    private:
        double prob;
    public:
        BitFlipProb(double pro);
        Individual mutate(Individual ind, int k) override;
         ~BitFlipProb() override = default;
};

#endif