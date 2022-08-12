#include <iostream>
#include "PaperDoll.h"

PaperDoll::PaperDoll(){
    _choice=0;
}
char PaperDoll::makeMove(){
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
        return 'S';
    default:
        return 0;
    }
}