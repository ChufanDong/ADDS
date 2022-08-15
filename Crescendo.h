#ifndef _CRESCENDO_H
#define _CRESCENDO_H
#include "Player.h"

class Crescendo: public Player{
    private:
    char _choice;
    public:
    Crescendo();
    void makeMove();
};
#endif