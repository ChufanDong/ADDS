#include <iostream>
#include <stdlib.h>
#include "RandomComputer.h"
#include "Player.h"

RandomComputer::RandomComputer(){
    srand((unsigned int)(time(NULL)));
}
void RandomComputer::makeMove(){
    int number = rand() % 3 + 1;
    switch (number)
    {
    case 1:
        move='R';
    case 2:
        move='S';
    case 3:
        move='P';
    }
}