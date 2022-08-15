#ifndef _BUREAUCRAT_H
#define _BUREAUCRAT_H
#include "Player.h"
#include <string.h>

class Bureaucrat: public Player{
    public:
    Bureaucrat();
    void makemove();
    std::string showname();
};
#endif