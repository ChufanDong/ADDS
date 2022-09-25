#include <iostream>
#include <string>
#include "BitFlip.h"

using namespace std;

BitFlip::BitFlip(){

}

Individual BitFlip::mutate(Individual ind, int k)
{
    int index;
    if (k % ind.getLength())
    {
        index = k % ind.getLength() - 1;
    }
    else
    {
        index = ind.getLength() - 1;
    }

    ind.flipBit(index);
    
    return ind;
}
/*
Individual BitFlip::mutate(Individual input, int k){
    
    while (k > _length){
        k = k - _length;
    }
    if(_return[k] == '0'){
        _return[k]= '1';
    }
    else{
        _return[k]= '0';
    }
}
*/