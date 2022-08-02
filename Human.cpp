#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    _choice = 0;
}
char Human::makeMove(){
    cout<<"Enter move: ";
    cin>>_choice;
    return _choice;
}