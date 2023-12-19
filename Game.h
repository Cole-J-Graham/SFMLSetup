#ifndef GAME_H
#define GAME_H
#include"State.h"

class Game
{
public:
	//Constructors and Destructors
	Game();
	virtual ~Game();

	//Core Functions
	void updateDt();
	void updateSFMLEvents();
	void update();
	void render();
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

};

#endif