#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){
    cout<<"Please enter R, P or S:"<<endl;
    cin>>_choice;
}
char Human::makeMove(){
    return _choice;
}