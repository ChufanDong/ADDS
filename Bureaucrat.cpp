#include <iostream>
#include "Bureaucrat.h"
#include "Player.h"

Bureaucrat::Bureaucrat(){
    
}
void Bureaucrat::makemove(){
    move='P';
}

std::string Bureaucrat::showname(){
    return "Bureaucrat";
}