#ifndef _PAPERDOLL_H
#define _PAPERDOLL_H
#include "Computer.h"

class PaperDoll: public Computer{
    private:
    char _choice;
    public:
    PaperDoll();
    char makeMove();
};
#endif