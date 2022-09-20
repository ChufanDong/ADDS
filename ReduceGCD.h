#ifndef _REDUCEGCD_H
#define _REDUCEGCD_H

#include "ReduceGeneric.h"
#include <vector>

class ReduceGCD: public ReduceGeneric{
    private:
        int binaryOperator(int x, int y);
    public:
        ReduceGCD();
};
#endif 