//Human class interface
#include <string>
#ifndef _PLAYER_H
#define _PLAYER_H
using namespace std;
class Player
{
public:
	Player();
	std::string move;
	std::string getMove();
	virtual std::string showname()=0;
	//char move;

};

#endif