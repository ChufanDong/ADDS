#include "Player.h"
#include <string>

#ifndef _AVALANCHE_H
#define _AVALANCHE_H

class Avalanche: public Player
{
public:
    Avalanche();
    void makemove();
    std::string showname();
};
#endif