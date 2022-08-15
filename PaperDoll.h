#include "Player.h"
#include <string>

#ifndef _PAPERDOLL_H
#define _PAPERDOLL_H





class PaperDoll: public Player
{
public:
    PaperDoll();
   std::string showname();
    
    
private:
    //define a variable to store a random char('R' in this assignment)
    //char move;
};

#endif