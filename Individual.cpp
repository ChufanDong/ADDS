#include <iostream>

#include "Individual.h"

using namespace std;

Individual::Individual(){
    binaryString="null";
}

string Individual::getString(){
    return binaryString;
}

int Individual::getBit(int pos){
    int length = binaryString.length();
    if( pos < length ){
        return binaryString[pos] - '0';
    }
    else{
        return -1;
    }
}

void Individual::flipBit(int pos){
    binaryString[pos] = binaryString[pos] == '0' ? '1' : '0';
}

int Individual::getMaxOnes(){
    int ones = 0;
    int length = binaryString.length();
    int max = 0;
    for (int i = 0; i < length; i++){
        if(binaryString[i] == '1'){
            ones++;
            if (max < ones){
            max = ones;
            }
        }
        else{
            ones = 0;
        }
    }
    return max;
}

int Individual::getLength(){
    return binaryString.size();
}

Individual::Individual(int length){
    for (int i = 0; i < length; i++){
        binaryString.push_back('0');
    }
}

Individual::Individual(string newString){
    binaryString = newString;
}

Individual::~Individual(){
   
}