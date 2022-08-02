#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    _choice = 0;
    cout<<"Enter move: ";
    cin>>_choice;
}
char Human::makeMove(){
    return _choice;
}