#include <iostream>

#include "BitFlip.h"

Individual BitFlip::mutate(Individual input, int k)
{
    while (k > input.getLength())
    {
        k = k - input.getLength();
    }

    k = k - 1;

    input.flipBit(k);
    
    return input;
}
