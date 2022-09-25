#ifndef INDIVIDUAL_H_
#define INDIVIDUAL_H_
#include <string>
#include <iostream>
using namespace std;

class Individual
{
    private:
        string binaryString;

    public:
        Individual();
        string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
        Individual(int length);
        Individual(string newString);

        ~Individual();
};
#endif
