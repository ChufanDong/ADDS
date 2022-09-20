#include <vector>
#include <cmath>

#include "FilterForTwoDigitPositive.h"

using namespace std;

FilterForTwoDigitPositive::FilterForTwoDigitPositive(){

}

bool FilterForTwoDigitPositive::g(int x){
    if(x<100 && x >= 10)
    {
        return true;
    }
    else
    {
        return false;
    }
}