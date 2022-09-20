#include <vector>

#ifndef _REDUCEGENERIC_H
#define _REDUCEGENERIC_H

class ReduceGeneric{
    private:
        virtual int binaryOperator(int x1, int x2)=0;
    public:
        ReduceGeneric();
        int reduce(std::vector<int>inputV);
};
#endif
