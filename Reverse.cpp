#include <iostream>
#include "Reverse.h"
using namespace std;

Reverse::Reverse(){
    _counter=1;
    _strReturn="";
}
int Reverse::reverseDigit(int value){
    if(value/10>0||value>0){
        int counter=1;
        int _value=value;
        while(_value/10>0){
            counter=counter*10;
            _value=_value/10;
        }
        return value%10*counter+reverseDigit(value/10);
    }
    else
    {
        return 0;
    }
}
string Reverse::reverseString(string letters){
    while(_counter<=letters.length()){
        _strReturn=_strReturn+letters[letters.length()-_counter];
        _counter++;
    }
    return _strReturn;
}