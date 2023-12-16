#include"Game.h"
//Static Functions
void Game::initWindow()
{
	/*Creates a SFML window using options from a window.ini file.*/

	this->window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Test...");
}

//Initializer Functions


//Constructor and Destructors
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

void Game::updateDt()
{
	/*Updates the dt variable with the time it takes to update and render one frame.*/

	this->dt = this->dtClock.restart().asSeconds();
}

//Core Functions
void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent)) {
		if (this->sfEvent.type == sf::Event::Closed) {
			this->window->close();
		}
	}
}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::render()
{
	this->window->clear();

	//Render Items

	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
