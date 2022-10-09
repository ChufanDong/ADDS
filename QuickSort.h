#ifndef _QUICKSORT_H
#define _QUICKSORT_H

#include "Sort.h"

class QuickSort : public Sort{
public:
    QuickSort();
    std::vector<int> sort(std::vector<int> list) override;

    vector<int> partition(vector<int> &arr, int l, int r);

    void quickSort(vector<int> &arr, int l, int r);
    ~QuickSort();
};
#endif