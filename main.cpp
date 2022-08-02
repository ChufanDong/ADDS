#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

using namespace std;

int main(){
    Human A;
    Computer B;
    Referee result;
    cout<<result.refGame(A, B)<<endl;

    return 0;
}