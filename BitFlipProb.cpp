#include <iostream>
#include <stdlib.h>

#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(double p){
    prob = p;
}

Individual BitFlipProb::mutate(Individual input, int k){
    for (int i = 0; i < input.getLength(); i++){
        double a = rand() / double(RAND_MAX);
        if (a <= prob){
            input.flipBit(i);
        }
    }

    return input;
}
