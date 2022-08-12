#ifndef _FISTFULLODOLLARS_H
#define _FISTFULLODOLLARS_H
#include "Computer.h"

class FistfullODollars: public Computer{
    private:
    char _choice;
    public:
    FistfullODollars();
    char makeMove();
};
#endif