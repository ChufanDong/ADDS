#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    cout<<"Enter move: ";
    cin>>_choice;
}
char Human::makeMove(){
    cout<<"Enter move: ";
    cin>>_choice;
    return _choice;
}