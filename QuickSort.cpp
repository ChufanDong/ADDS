#include <iostream>
#include <algorithm>

#include "QuickSort.h"

using namespace std;

QuickSort::QuickSort(){}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    std::vector<int> result = list;
    if (result.size() < 2)
        return result;
    quickSort(result, 0, result.size() - 1);
    return result;
}

vector<int> QuickSort::partition(vector<int> &arr, int left, int right) {
    int leftTemp = left - 1;
    int rightTemp = right;
    while (left < rightTemp) {
        if (arr[left] < arr[right]) {
            swap(arr[++leftTemp], arr[left++]);
        } else if (arr[left] > arr[right]) {
            swap(arr[left], arr[--rightTemp]);
        } else {
            ++left;
        }
    }
    swap(arr[rightTemp], arr[right]);
    vector<int> idxList{leftTemp + 1, rightTemp};
    return idxList;
}

void QuickSort::quickSort(vector<int> &arr, int left, int right) {
    if (left >= right) {
        return;
    }
    if (right - left + 1 >= 3) {
        swap(arr[right], arr[left + 2]);
    }
    vector<int> idxList = partition(arr, left, right);
    quickSort(arr, left, idxList[0] - 1);
    quickSort(arr, idxList[1] + 1, right);

}

QuickSort::~QuickSort(){}