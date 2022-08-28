#ifndef _TRUCKLOADS_H
#define _TRUCKLOADS_H
#include <iostream>
using namespace std;

class Truckloads{
    private:
    int _numReturn;
    public:
    Truckloads();
    int numTrucks(int numCrates, int loadSize);
};
#endif