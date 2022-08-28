#include <iostream>
#include "Truckloads.h"

Truckloads::Truckloads(){
    _numReturn=1;
}
int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates<0 || loadSize<0 || numCrates>10000 || loadSize>10000){
        return -1;
    }
    
}