#include <vector>

#ifndef _FILTERGENERIC_H
#define _FILTERGENERIC_H

class FilterGeneric{
    private:
        virtual bool g(int x)=0;
    public:
        FilterGeneric();
        std::vector<int> filter(std::vector<int> inputV);
};
#endif 