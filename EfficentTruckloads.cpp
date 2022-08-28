#include <iostream>
#include "EfficentTruckloads.h"

EfficentTruckloads::EfficentTruckloads(){
    _numCrates=0;
    _loadSize=0;
    _result=0;
    _counter=0;
}
int EfficentTruckloads::memoisation(){
    for(int i=0;i<10;i++){
        if(form[i][0]==_numCrates && form[i][1]==_loadSize){
            return form[i][2];
        }
        else{
            return -1;
        }
    }
    form[_counter][0]=_numCrates;
    form[_counter][1]=_loadSize;
    form[_counter][2]=_result;
    _counter++;
    return -1;
}
int EfficentTruckloads::numTrucks(int numCrates, int loadSize){
    _numCrates=numCrates;
    _loadSize=loadSize;
    if (numCrates == 0) {
        return 0;
    }
    if (numCrates == 1) {
        return numCrates <= loadSize ? 1 : 0;
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