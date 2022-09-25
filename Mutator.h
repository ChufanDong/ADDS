#ifndef MUTATOR_H_
#define MUTATOR_H_
#include "Individual.h"
#include <iostream>

class Mutator : public Individual
{
    public:
        Mutator(){}
        virtual Individual mutate(Individual ind, int k)=0;
        virtual ~Mutator() = default;
};

#endif