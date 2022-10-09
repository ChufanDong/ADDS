#include <vector>
#include <algorithm>

#include "BubbleSort.h"

using namespace std;

vector<int> BubbleSort::sort(std::vector<int> list){
    int length = list.size();
    _isEnd = true;
    for (int i = 0; i < length-1; i++){
        if (list[i]>list[i+1]){
            swap(list[i], list[i+1]);
            _isEnd = false;
        }
    }
    if (_isEnd == true){
        return list;
    }
    return sort(list);
}