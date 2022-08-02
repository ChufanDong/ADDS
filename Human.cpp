#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    _choice = 0;
}
char Human::makeMove(){
    cout<<"Please enter R, P or S:"<<endl;
    cin>>_choice;
    return _choice;
}