#include <iostream>

#include "Individual.h"

#ifndef _MUTATOR_H
#define _MUTATOR_H

class Mutator : public Individual{
    public:
        Mutator(){}
        virtual Individual mutate(Individual input, int k)=0;
        virtual ~Mutator() = default;
};
#endif