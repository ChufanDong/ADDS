#include "Player.h"
#include <string>

#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H




class Bureaucrat: public Player
{
public:
    Bureaucrat();
   
    std::string showname();
    
private:
    //define a variable to store a random char('R' in this assignment)
    //char move;
};

#endif