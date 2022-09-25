#include "BitFlipProb.h"
#include <iostream>

BitFlipProb::BitFlipProb(double p)
{
    prob = p;
}

Individual BitFlipProb::mutate(Individual ind, int k)
{
    
    for (int i = 0; i < ind.getLength(); i++)
    {
        double a = rand() % 10 / 10;
        if (a <= prob)
        {
            ind.flipBit(i);
        }
    }
        

    return ind;
}