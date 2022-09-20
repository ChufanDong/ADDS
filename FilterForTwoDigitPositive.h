#include <vector>

#include "FilterGeneric.h"

#ifndef _FILTERFORTWODIGITPOSITIVE_H
#define _FILTERFORTWODIGITPOSITIVE_H

class FilterForTwoDigitPositive: public FilterGeneric{
    private:
        bool g(int x);
    public:
        FilterForTwoDigitPositive();
};
#endif