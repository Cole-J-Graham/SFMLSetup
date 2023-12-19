#ifndef STATE_H
#define STATE_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>

#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Graphics/Text.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>

class State
{
public:
	//Constructors and Destructors
	State(sf::RenderWindow* window);
	virtual ~State();

	const bool& getQuit() const;

	virtual void checkForQuit();
	virtual void endState() = 0;

	//Pure Virtual Functions
	virtual void updateKeybinds(const float& dt) = 0;
	virtual void update(const float& dt) = 0;
	virtual void render(sf::RenderTarget* target = nullptr) = 0;

private:
	sf::RenderWindow* window;
	std::vector<sf::Texture> textures;
	bool quit;
};

#endif
