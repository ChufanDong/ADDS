#include <iostream>
#include <stdlib.h>
#include "RandomComputer.h"

char RandomComputer::makeMove(){
    srand((unsigned int)(time(NULL)));
    int number = rand() % 3 + 1;
    switch (number)
    {
    case 1:
        return 'R';
    case 2:
        return 'S';
    case 3:
        return 'P';
    default:
        return 0;
    }
}