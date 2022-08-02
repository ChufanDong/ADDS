#ifndef _REFEREE_H
#define _REFEREE_H

#include "Human.h"
#include "Computer.h"

class Referee{
    private:
    char _result;
    public:
    Referee( ); // constructor
    char refGame(Human player1, Computer player2);
    // returns the outcome for player1:  'W', 'L' or 'T' (Win, Lose, Tie)

};

#endif