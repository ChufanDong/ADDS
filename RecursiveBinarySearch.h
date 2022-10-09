#include <vector>
#include <algorithm>

class RecursiveBinarySearch {
    public:
    RecursiveBinarySearch();
    bool search(std::vector<int> list, int n);
    bool search2(std::vector<int> list, int n, int left, int right);
    ~RecursiveBinarySearch();
};