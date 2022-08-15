#ifndef _TOURNAMENT_H
#define _TOURNAMENT_H
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

class Tournament{

		Referee r;

	public: 

		Tournament();
		// Start the game and return the final winner
		//Computer* run(Computer* Player1,Computer* Player2,Computer* Player3,Computer* Player4,Computer* Player5,Computer* Player6,Computer* Player7,Computer* Player8);
		
		Player* run(std::array<Player*, 8> competitors);
	


};

#endif
