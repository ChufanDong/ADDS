#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    _choice = 0;
    cout<<"Enter move: "<<endl;
    cin>>_choice;
}
char Human::makeMove(){
    return _choice;
}