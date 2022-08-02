#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    
}
char Human::makeMove(){
    _choice = 0;
    cout<<"Enter move: ";
    cin>>_choice;
    cout<<_choice<<endl;
    return _choice;
}