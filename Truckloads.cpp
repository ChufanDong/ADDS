#include <iostream>
#include "Truckloads.h"

Truckloads::Truckloads(){
}
int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates == 0) {
        return -1;
    }
    if (numCrates == 1) {
        return numCrates <= loadSize ? 1 : -1;
    }
    if (numCrates <= loadSize) {
        return 1;
    }
    if (numCrates % 2 == 0) {
        return numTrucks(numCrates / 2, loadSize) * 2;
    } else {
        return numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates + 1) / 2, loadSize);
    }
}