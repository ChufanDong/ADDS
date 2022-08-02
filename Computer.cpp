#include <iostream>
#include "Computer.h"

Computer::Computer(){
    _choice='R';
}
char Computer::makeMove(){
    return _choice;
}