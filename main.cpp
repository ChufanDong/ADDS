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
    int n1=stoi(inStr[arraySize+1]), n2=stoi(inStr[arraySize+2]);
    switch(*p){
        case 'A':
        switch(*(p+1)){
            case 'E':
            List_1.addEnd(n1);
            break;

            case 'F':
            List_1.addFront(n1);
            break;

            case 'P':
            List_1.addAtPosition(n1,n2);
            break;
        }
        break;

        case 'D':
        switch(*(p+1)){
            case 'E':
            List_1.deleteEnd();
            break;

            case 'F':
            List_1.deleteFront();
            break;

            case 'P':
            List_1.deletePosition(n1);
            break;
        }
        break;

        case 'G':
        if(*(p+1) == 'I'){
            List_1.getItem(n1);
        }
        break;

        case 'S':
        List_1.search(n1);
        break;

        default:
        break;
    }

    List_1.printItems();
    return 0;
}