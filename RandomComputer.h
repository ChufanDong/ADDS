#ifndef _RANDOMCOMPUTER_H
#define _RANDOMCOMPUTER_H
#include "Player.h"

class RandomComputer: public Player{
    public:
    RandomComputer();
    void makeMove();
};
#endif