#include <iostream>
#include "PaperDoll.h"
#include "Player.h"

PaperDoll::PaperDoll(){
    _choice=0;
}
void PaperDoll::makeMove(){
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
        move='S';
    }
}