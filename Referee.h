#ifndef _REFEREE_H_
#define _REFEREE_H_

#include "Player.h"
#include <string>

class Referee
{
    std::string p1;
    std::string p2;
private:
    //char result;
public:
    Referee();
    Player* refGame(Player* playerA, Player* PlayerB);
    // returns the outcome'W', 'L' or 'T' (Win, Lose, Tie) for player1
};

#endif