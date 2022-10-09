#include "RecursiveBinarySearch.h"

using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){}

bool RecursiveBinarySearch::search(std::vector<int> list, int n){
    int _length = list.size();
    return search2(list, n, 0, _length);
}
bool RecursiveBinarySearch::search2(std::vector<int> list, int n, int left, int right){
    if (left +1 == right){
        if(n == list[left] || n == list[right]){
            return true;
        }
        return false;
    }
    int mid = (left + right)/2;
    if (n == list[mid]){
        return true;
    }
    else if(n > list[mid]){
        left = mid;
        return search2(list, n, left, right);
    }
    else if(n < list[mid]){
        right = mid;
        return search2(list, n, left, right);
    }
    else{
        return false;
    }
}

RecursiveBinarySearch::~RecursiveBinarySearch(){}