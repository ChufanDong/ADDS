#include <iostream>
#include <string>
#include <array>
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"
#include "Player.h"
#include "Tournament.h"

using namespace std;

int main(){
    Tournament A;
    Avalanche Ava;
    Bureaucrat Bur1;
    Bureaucrat Bur2;
    Toolbox Too1;
    Toolbox Too2;
    Crescendo Cre1;
    Crescendo Cre2;
    FistfullODollars Fis;
    std::array<Player*, 8> competitors{Ava, };
    A.run(std::array<Player*, 8> competitors);
}