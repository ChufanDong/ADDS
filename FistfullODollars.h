#ifndef _FISTFULLODOLLARS_H
#define _FISTFULLODOLLARS_H
#include "Player.h"

class FistfullODollars: public Player{
    private:
    char _choice;
    public:
    FistfullODollars();
    void makeMove();
};
#endif