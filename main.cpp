#include <iostream>
#include "Reverse.h"

using namespace std;

int main(){
    Reverse A;
    cout<<A.reverseDigit(2048)<<endl;
    cout<<A.reverseString("AbCdE")<<endl;
    return 0;
}