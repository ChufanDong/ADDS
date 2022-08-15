#include <iostream>
#include "Human.h"
#include "Player.h"

using namespace std;

Human::Human(){
}
void Human::makeMove(){
    cout<<"Enter move: ";
    cin>>_choice;
    move=_choice;
}