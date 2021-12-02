#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>

class Menu
{
public:
	Menu(float x, float y);
	void display(sf::RenderWindow& window);

private:
	sf::Text options[3];
	sf::Font style;
};
