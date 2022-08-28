#include <iostream>
#include "Reverse.h"
using namespace std;

Reverse::Reverse(){
    _counter=1;
    _numReturn=0;
    _strReturn="";
}
int Reverse::reverseDigit(int value){
    if(value<0)
    {
        return -1;
    }
    if(value>0){
        _numReturn=_numReturn*10+value%10;
        reverseDigit(value/10);
        return _numReturn;
    }
    else{
        return 0;
    }
}
string Reverse::reverseString(string letters){
    if(letters.length()<=0){
        return "ERROR";
    }
    while(_counter<=letters.length()){
        _strReturn=_strReturn+letters[letters.length()-_counter];
        _counter++;
    }
    return _strReturn;
}