#include "BitFlip.h"
#include <iostream>

Individual BitFlip::mutate(Individual ind, int k)
{
    while (k > ind.getLength())
    {
        k = k - ind.getLength() - 1;
    }

    ind.flipBit(k);
    
    return ind;
}