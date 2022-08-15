#ifndef _COMPUTER_H
#define _COMPUTER_H
#include "Player.h"

class Computer:public Player{
    private:
    char _choice;
    public:
    Computer(); // constructor
    void makeMove();
};
#endif