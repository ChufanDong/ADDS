#ifndef _INDIVIDUAL_H
#define _INDIVIDUAL_H

#include <iostream>
#include <string>



using namespace std;

class Individual{
    private:
        string binaryString;
        int _length;
    public:
        Individual();
        Individual(int length);
        Individual(string newString);
        string getString();
        int getBit(int pos);
        int getLength();
        int getMaxOnes();
        void flipBit(int pos);
        
        ~Individual();
};
#endif
