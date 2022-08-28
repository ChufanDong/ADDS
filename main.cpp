#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficentTruckloads.h"

using namespace std;

int main(){
    int x,y,n=0;
    string str="";
    cin>>n;
    cin>>str;
    cin>>x;
    cin>>y;
    Reverse A;
    Truckloads B;
    EfficentTruckloads C;
    int a=A.reverseDigit(n);
    string b=A.reverseString(str);
    int c=B.numTrucks(x,y);
    int d=C.numTrucks(x,y);
    if(a==-1){
        cout<<"ERROR";
    }
    else{
        cout<<a;
    }
    cout<<" "<<b<<" ";
    if(c==-1){
        cout<<"ERROR ERROR";
    }
    else{
        cout<<c<<" "<<c<<endl;
    }
    return 0;
}