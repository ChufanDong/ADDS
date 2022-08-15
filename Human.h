#ifndef _HUMAN_H
#define _HUMAN_H
#include "Player.h"

class Human : public Player{
    private:
    char _choice;
    public:
    Human(); // constructor
    void makeMove();
    ~Human();
};
#endif