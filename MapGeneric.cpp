#include <vector>

#include "MapGeneric.h"

using namespace std;

MapGeneric::MapGeneric(){

}

vector<int> MapGeneric::map(vector<int>inputV){
    newV.push_back(f(inputV[0]));
    if(inputV.size() == 1)
        {
            return newV;
        }
    else
    {
        inputV.erase(inputV.begin());
        return map(inputV);
    }
}