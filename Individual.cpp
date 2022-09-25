#include "Individual.h"
#include <iostream>
using namespace std;



Individual::Individual()
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
    if( pos < length )
        return binaryString[pos] - '0';
    else 
        return -1;
}

void Individual::flipBit(int pos)
{
    binaryString[pos] = binaryString[pos] == '0' ? '1' : '0';
}

int Individual::getMaxOnes()
{
    int ones = 1;
    int leng = binaryString.length();
    for (int i = 0; i < leng; i++)
    {
        while (binaryString[i] == binaryString[i+1] && binaryString[i] == '1')
        {
            ones++;
            i++;
        }
    }
    return ones;
}

int Individual::getLength()
{
    return binaryString.size();
}

Individual::Individual(int length)
{
    for (int i = 0; i < length; i++)
        binaryString.push_back('0');
}

Individual::Individual(string newString)
{
    binaryString = newString;
}

Individual::~Individual()
{
   
}