#include "Player.h"
#include <string>

#ifndef _TOOLBOX_H
#define _TOOLBOX_H




class Toolbox: public Player
{
public:
    Toolbox();
    std::string showname();
    
    
private:
    //define a variable to store a random char('R' in this assignment)
    //char move;
};

#endif