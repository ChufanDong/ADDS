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
    
    //if (p1 == p2)
    //{
    //    result = 'T';
    // }
    //else if ((p1 == 'R' && p2 == 'S') || (p1 == 'P' && p2 == 'R') || (p1 == 'S' && p2 == 'P') )
    //{
    //    result = 'W';
    //}
    //else
    //{
    //    result = 'L';
    //}
    
    //return result;



    for(int i=0; i<5; i++)
    {
        if (p1.at(i)=='R'&&p2.at(i)=='R')
    {
        //result = 'T';
        scoreA++;
    
    }
    else if ((p1.at(i)=='R'&&p2.at(i)=='S') || (p1.at(i)=='S'&&p2.at(i)=='P') || (p1.at(i)=='P'&&p2.at(i)=='R') )
    {
        //result = 'W';
        scoreA++;
    }
    else
    {
        //result = 'L';
        scoreB++;
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