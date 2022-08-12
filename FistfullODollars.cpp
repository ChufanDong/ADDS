#include <iostream>
#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
    _choice=0;
}
char FistfullODollars::makeMove(){
    _choice++;
    if (_choice>3){
        _choice=1;
    }
    switch (_choice)
    {
    case 1:
        return 'R';
    case 2:
        return 'P';
    case 3:
        return 'P';
    default:
        return 0;
    }
}