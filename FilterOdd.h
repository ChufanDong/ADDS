#include <vector>

#include "FilterGeneric.h"

#ifndef _FILTERODD_H
#define _FILTERODD_H

class FilterOdd: public FilterGeneric{
    private:
        bool g(int x);
    public:
        FilterOdd();
};
#endif