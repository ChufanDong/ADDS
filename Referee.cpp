#include "Referee.h"
using namespace std;

Referee::Referee()
{
    p1="default";
    p2="default";
}

Player* Referee::refGame(Player* playerA, Player* PlayerB)
{
    int scoreA=0;
    int scoreB=0;

     p1 = playerA-> getMove();
     p2 = PlayerB-> getMove();
 
    for(int i=0; i<5; i++)
    {
        if (p1.at(i)==p2.at(i))
    {
        //result = 'T';
        scoreA++;
    }
    else if ((p1.at(i)=='R'&&p2.at(i)=='P') || (p1.at(i)=='S'&&p2.at(i)=='R') || (p1.at(i)=='P'&&p2.at(i)=='S') )
    {
        //result = 'L';
        scoreB++;
    }
    else
    {
        //result = 'W';
        scoreA++;
    }
    }

    if(scoreA>scoreB)
    {
        return playerA;
    }
    else if(scoreA<scoreB)
    {
        return PlayerB;
    }
    else
    {
        return playerA;
    }
    
}