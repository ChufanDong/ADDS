#include "Player.h"
#include <string>

#ifndef _FISTFULLDOLLARS_H
#define _FISTFULLDOLLARS_H




class FistfullODollars: public Player
{
public:
    FistfullODollars();
   
    //char makeMove();
    std::string showname();
    
private:
    //define a variable to store a random char('R' in this assignment)
    //char move;
};

#endif
