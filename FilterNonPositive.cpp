#include <vector>

#include "FilterNonPositive.h"

using namespace std;

FilterNonPositive::FilterNonPositive(){

}

bool FilterNonPositive::g(int x){
    if(x > 0){
        return false;   
    }
    else{
        return true;
    }
}