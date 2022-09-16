#include <iostream>
using namespace std;
int f(int n){
    return f(n/3)+f(n/2);
}

int main(){
    int a=0;
    cout<<f(a)<<endl;
    return 0;
}