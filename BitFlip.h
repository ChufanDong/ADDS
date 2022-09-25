#include "Mutator.h"

#ifndef _BITFLIP_H
#define _BITFLIP_H

class  BitFlip : public Mutator{
    private:
        /*string _return;
        int _length;*/
    public:
        BitFlip();
        Individual mutate(Individual input, int k);
        ~BitFlip() override = default;
};
#endif