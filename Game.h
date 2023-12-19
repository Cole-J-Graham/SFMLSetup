#ifndef GAME_H
#define GAME_H
#include"GameState.h"

class Game
{
public:
	//Constructors and Destructors
	Game();
	virtual ~Game();
	void endApplication();

	//Update
	void update();
	void updateDt();
	void updateSFMLEvents();

	//Render
	void render();

	//Core
	void run();

private:
	//Variables
	sf::RenderWindow* window;
	sf::Event sfEvent;

	sf::Clock dtClock;
	float dt;

	std::stack<State*> states;

	//Initialization
	void initWindow();
	void initStates();

};

#endif