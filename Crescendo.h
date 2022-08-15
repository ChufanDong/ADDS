#include "Player.h"
#include <string>

#ifndef _CRESCENDO_H
#define _CRESCENDO_H




class Crescendo: public Player
{
public:
    Crescendo();

    std::string showname();
    //char makeMove();
    
private:
    //define a variable to store a random char('R' in this assignment)
    //char move;
};

#endif