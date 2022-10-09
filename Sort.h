#ifndef _SORT_H
#define _SORT_H

#include <vector>

using namespace std;

class Sort{
private:

public:
    Sort(){}
    virtual vector<int> sort(std::vector<int> list) = 0;
    ~Sort(){}
};
#endif