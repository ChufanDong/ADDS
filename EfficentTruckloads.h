#ifndef _EFFICENTTRUCKLOADS_H
#define _EFFICENTTRUCKLOADS_H
#include <iostream>
using namespace std;

class EfficentTruckloads{
    private:
    int _numCrates;
    int _loadSize;
    int _result;
    int _counter;
    int form[10][3];
    public:
    EfficentTruckloads();
    int memoisation();
    int numTrucks(int numCrates, int loadSize);
};
#endif