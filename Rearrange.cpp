#include "Rearrange.h"
#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    int index;
    Individual temp(ind.getLength());
    if (k % ind.getLength())
    {
        index = k % ind.getLength() - 1;
    }
    else
    {
        index = ind.getLength() - 1;
    }
    for(int i = index, j = 0; i < ind.getLength(); i++, j++)
    {
        if(temp.getBit(j) != ind.getBit(i) )
            temp.flipBit(j);
    }

    for(int i = 0, j = ind.getLength() - index ; i < index; i++, j++)
    {
            if(temp.getBit(j) != ind.getBit(i) )
            temp.flipBit(j);
    }

    return temp;
}