#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"


using namespace std;

int main(){
    Referee result;
    Human A1;
    Human A2;
    Human A3;
    Toolbox B;
    cout<<result.refGame(A1, B)<<endl;
    cout<<result.refGame(A2, B)<<endl;
    cout<<result.refGame(A3, B)<<endl;

    return 0;
}