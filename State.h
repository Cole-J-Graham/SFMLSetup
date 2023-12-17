#ifndef STATE_H
#define STATE_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<fstream>
#include<sstream>

#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>
#include<SFML/Graphics/Text.hpp>
#include<SFML/System.hpp>
#include<SFML/Audio.hpp>

class State
{
public:
	//Constructors and Destructors
	State();
	virtual ~State();

	//Pure Virtual Functions
	virtual void update() = 0;
	virtual void render() = 0;

private:
	std::vector<sf::Texture> textures;
};

#endif
