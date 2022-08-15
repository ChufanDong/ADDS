#include <iostream>
#include "FistfullODollars.h"
#include "Player.h"

FistfullODollars::FistfullODollars(){
    _choice=0;
}
void FistfullODollars::makeMove(){
    _choice++;
    if (_choice>3){
        _choice=1;
    }
    switch (_choice)
    {
    case 1:
        move='R';
    case 2:
        move='P';
    case 3:
        move='P';
    }
}