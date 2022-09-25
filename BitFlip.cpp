#include "BitFlip.h"
#include <iostream>

Individual BitFlip::mutate(Individual ind, int k)
{
    int index;
    while (k > ind.getLength())
    {
        index = k - ind.getLength() - 1;
    }

    ind.flipBit(index);
    
    return ind;
}