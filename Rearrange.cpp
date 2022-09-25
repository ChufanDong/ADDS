#include <iostream>
#include "Rearrange.h"

Individual Rearrange::mutate(Individual input, int k){
    
    Individual output(input.getLength());

    while (k > input.getLength()){
        k = k - input.getLength();
    }

    k = k - 1;

    for(int i = k, j = 0; i < input.getLength(); i++, j++){
        if(output.getBit(j) != input.getBit(i) ){
            output.flipBit(j);
        }
    }

    for(int i = 0, j = input.getLength() - k ; i < k; i++, j++){
        if(output.getBit(j) != input.getBit(i)){
            output.flipBit(j);
        }
    }

    return output;
}