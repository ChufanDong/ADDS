#ifndef _CRESCENDO_H
#define _CRESCENDO_H
#include "Computer.h"

class Crescendo: public Computer{
    private:
    char _choice;
    public:
    Crescendo();
    char makeMove();
};
#endif