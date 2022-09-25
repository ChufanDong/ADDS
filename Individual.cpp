#include "Individual.h"
#include <iostream>
using namespace std;



Individual::Individual(string binarystring)
{
    binaryString="null";
}

string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{
    int length = binaryString.length();
    if( pos < length && pos > 1)
        return binaryString[pos] - '0';
    else 
        return -1;
}

void Individual::flipBit(int pos)
{
    binaryString[pos] = binaryString[pos] == '0' ? '1' : '0';
}

int Individual :: getMaxOnes()
{
    int counter = 0;
    int maxones = 0;

    for (int i = 0; i < _length; i++)
    {
        if (binaryString.at(i) == '1')
        {
            counter++;
        } else 
        {
            counter = 0;
        }
        maxones = max(maxones,counter);
    }
    return maxones;
}

int Individual::getLength()
{
    return _length;
}

Individual::Individual(int length)
{
    for (int i = 0; i < length; i++){
        binaryString.push_back('0');
    }
}

Individual::Individual(string newString)
{
    binaryString = newString;
}

Individual::~Individual()
{
   
}