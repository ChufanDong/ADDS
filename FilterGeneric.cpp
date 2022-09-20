#include <vector>

#include "FilterGeneric.h"

FilterGeneric::FilterGeneric(){

}
std::vector<int> FilterGeneric::filter(std::vector<int>inputV){
    int counter = -1;
    for(unsigned int i=0; i<inputV.size(); i++)
    {
        if(g(inputV[i]) == false)
        {
            counter = i;
            break;
        }
    }
    if(counter > -1)
    {
        inputV.erase(inputV.begin()+counter);
        return filter(inputV);
    }
    else
    {
        return inputV;
    }
}