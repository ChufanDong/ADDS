#include <vector>

#include "ReduceGCD.h"

using namespace std;

ReduceGCD::ReduceGCD(){
    
}

int ReduceGCD::binaryOperator(int x, int y){
    if (y == 0)
    {
    	return x;
    }
    else
    {
    	return binaryOperator(y, x % y);
    }
}
