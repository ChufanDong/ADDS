#include <iostream>
#include "Human.h"
using namespace std;

Human::Human()
{
    std::string move;
}

string Human::makeMove()
{
    
    
    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
    
}
