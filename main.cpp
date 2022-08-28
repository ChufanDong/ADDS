#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"

using namespace std;

int main(){
    int x,y,n=0;
    string str="";
    cin>>n>>str>>x>>y;
    Reverse A;
    Truckloads B;
    int a=A.reverseDigit(n);
    string b=A.reverseString(str);
    int c=B.numTrucks(x,y);
    if(a==-1){
        cout<<"ERROR";
    }
    else{
        cout<<a;
    }
    cout<<" "<<b<<" ";
    if(c==-1){
        cout<<"ERROR";
    }
    else{
        cout<<c;
    }
    return 0;
}