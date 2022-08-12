#include "Tournament.h"

Tournament::Tournament(){

}

// Start the game and return the final winner
Player* Tournament::run(std::array<Player*, 8> competitors)
{

	// The first two rounds
	Player* Winner1 = r.refGame(r.refGame(competitors[0],competitors[1]),r.refGame(competitors[2],competitors[3]));
	Player* Winner2 = r.refGame(r.refGame(competitors[4],competitors[5]),r.refGame(competitors[6],competitors[7]));

	// The final
	Player* finalWinner = r.refGame(Winner1,Winner2);

	return finalWinner;

}