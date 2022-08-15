//Human class interface
#include <string>
#ifndef _PLAYER_H
#define _PLAYER_H
using namespace std;
class Player
{
public:
	Player();
	char move;
	char getMove();
	virtual std::string showname()=0;
	//char move;
};

#endif