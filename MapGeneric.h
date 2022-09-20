#include <vector>
using namespace std;

#ifndef _MAPGENERIC_H
#define _MAPGENERIC_H

class MapGeneric{
    private:
    virtual int f(int x) =0;
    vector<int>newV;
    public:
    MapGeneric();
    vector<int>map(vector<int>inputV);
};
#endif