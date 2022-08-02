#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
}
char Human::makeMove(){
    cout<<"Enter move: ";
    cin>>_choice;
    return _choice;
}