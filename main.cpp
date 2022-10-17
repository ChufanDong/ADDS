#include <iostream>
#include <cstring>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(){
    string inStr[100], input;
    int array[100], enterCounter = 0, arraySize = 0;
    // Input everything
    while(cin>>input){
        inStr[enterCounter] = input;
        enterCounter++;
        if(cin.get()=='\n'){
            break;
        }
    }

    // Get input array
    for(int i = 0; i<enterCounter; i++){
        if(inStr[i] <= "9" && input >= "0"){
            array[i] = stoi(inStr[i]);
            arraySize++;
        }
        else{
            break;
        }
    }

    //
    LinkedList List_1(array,arraySize);
    // Get action
    const char * p = inStr[arraySize].c_str();
    switch(*p){
        case 'A':
        switch(*(p+1)){
            case 'E':
            cout<<"AE";
            break;

            case 'F':
            cout<<"AF";
            break;

            case 'P':
            cout<<"AP";
            break;
        }
        break;

        case 'D':
        switch(*(p+1)){
            case 'E':
            cout<<"DE";
            break;

            case 'F':
            cout<<"DF";
            break;

            case 'P':
            cout<<"DP";
            break;
        }
        break;

        case 'G':
        if(*(p+1) == 'I'){
            cout<<"GI";
        }
        break;

        case 'S':
        cout<<"S";
        break;

        default :
            break;
    }

    for(int i=arraySize; i<enterCounter; i++){
        
    }

    return 0;
}