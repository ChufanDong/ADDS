#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){
    Referee result;
    Human A;
    Computer B;
    cout<<result.refGame(A, B)<<endl;

    return 0;
}