#include "Rearrange.h"
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    Individual temp(ind.getLength());
    while (k > ind.getLength())
    {
        k = k - ind.getLength();
    }
    k = k - 1;
    for(int i = k, j = 0; i < ind.getLength(); i++, j++)
    {
        if(temp.getBit(j) != ind.getBit(i) ){
            temp.flipBit(j);
        }
    }

    for(int i = 0, j = ind.getLength() - k ; i < k; i++, j++)
    {
            if(temp.getBit(j) != ind.getBit(i) )
            temp.flipBit(j);
    }
    return temp;
}