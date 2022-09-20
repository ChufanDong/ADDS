#include <vector>

#include "ReduceGeneric.h"

using namespace std;

ReduceGeneric::ReduceGeneric(){

}

int ReduceGeneric::reduce(vector<int>inputV)
{
    if(inputV.size() == 1)
    {
        return inputV[0];
    }
    else
    {
        if(binaryOperator(inputV[0],inputV[1]) == inputV[0])
        {
            inputV.erase(inputV.begin()+1);
        }
        else if(binaryOperator(inputV[0],inputV[1]) == inputV[1])
        {
            inputV.erase(inputV.begin());
        }
        else
        {
            inputV[1] = binaryOperator(inputV[0],inputV[1]);
            inputV.erase(inputV.begin());
        }
        return reduce(inputV);
    }
}
