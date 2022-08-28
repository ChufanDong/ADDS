#ifndef _EFFICIENTTRUCKLOADS_H
#define _EFFICIENTTRUCKLOADS_H
#include <iostream>
using namespace std;

class EfficientTruckloads{
    private:
    int _numCrates;
    int _loadSize;
    int _result;
    int _counter;
    int form[10][3];
    public:
    EfficientTruckloads();
    int memoisation();
    int numTrucks(int numCrates, int loadSize);
};
#endif