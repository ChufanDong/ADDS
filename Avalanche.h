#include "Player.h"
#include <string>

#ifndef _AVALANCHE_H
#define _AVALANCHE_H

using namespace std;


class Avalanche: public Player
{
public:
    Avalanche();
   
    std::string showname();
    
private:
    //define a variable to store a random char('R' in this assignment)
    
};

#endif