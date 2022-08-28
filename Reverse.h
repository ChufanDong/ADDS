#ifndef _REVERSE_H
#define _REVERSE_H
#include <iostream>
using namespace std;

class Reverse{
    private:
    int _counter;
    int _numReturn;
    string _strReturn;
    public:
    Reverse();
    int reverseDigit(int value);
    string reverseString(string letters);
};
#endif