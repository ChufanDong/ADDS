#ifndef _PAPERDOLL_H
#define _PAPERDOLL_H
#include "Player.h"

class PaperDoll: public Player{
    private:
    char _choice;
    public:
    PaperDoll();
    void makeMove();
};
#endif