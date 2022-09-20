#ifndef _REDUCEMINIMUM_H
#define _REDUCEMINIMUM_H

#include <vector>

#include "ReduceGeneric.h"

class ReduceMinimum: public ReduceGeneric{
    private:
        int binaryOperator(int x, int y);
    public:
        ReduceMinimum();
};
#endif
