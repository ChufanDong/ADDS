#include <iostream>
#include "Crescendo.h"

Crescendo::Crescendo(){
    _choice=0;
}
char Crescendo::makeMove(){
    _choice++;
    if (_choice>3){
        _choice=1;
    }
    switch (_choice)
    {
    case 1:
        return 'P';
    case 2:
        return 'S';
    case 3:
        return 'R';
    default:
        return 0;
    }
}