#ifndef GAMESTATE_H
#define GAMESTATE_H

#include"State.h"
class GameState : public State
{
public:
	//Constructors and Destructors
	GameState();
	virtual ~GameState();

	//Functions
	void update();
	void render();

private:

};

#endif

