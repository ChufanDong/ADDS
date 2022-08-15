#include <iostream>
#include "Crescendo.h"
#include "Player.h"

Crescendo::Crescendo(){
    _choice=0;
}
void Crescendo::makeMove(){
    _choice++;
    if (_choice>3){
        _choice=1;
    }
    switch (_choice)
    {
    case 1:
        move='P';
    case 2:
        move='S';
    case 3:
        move='R';
    }
}