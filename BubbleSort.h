#ifndef _BUBBLESORT_H
#define _BUBBLESORT_H

#include "Sort.h"

class BubbleSort : public Sort{
private:
    bool _isEnd;
public:
    BubbleSort(){}
    vector<int> sort(std::vector<int> list);
    ~BubbleSort(){}
};
#endif