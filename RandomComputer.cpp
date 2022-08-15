
#include "RandomComputer.h"
#include <cstdlib>
#include <string>
using namespace std;

string RandomComputer::showname()
{
    return "RandomComputer";
}

RandomComputer::RandomComputer()
{
    move="PPPPP";
}






void RandomComputer::R()
{
    for(int i=0;1<5;i++)
    {
        int r=rand()%4;

        if(r==1)
        {
            move.replace(i,i,"R");
        }
        else if(r==2)
        {
            move.replace(i,i,"S");
        }
        else if(r==3)
        {
            move.replace(i,i,"P");
        }
    }

}

