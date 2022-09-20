#include <vector>

#include "FilterGeneric.h"

#ifndef _FILTERNONPOSITIVE_H
#define _FILTERNONPOSITIVE_H

class FilterNonPositive: public FilterGeneric{
    private:
        bool g(int x);
    public:
        FilterNonPositive();
};
#endif