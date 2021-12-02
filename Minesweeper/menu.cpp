#include "Menu.h"

Menu::Menu(float x, float y)
{
	if (!style.loadFromFile("arial.ttf"))
	{
		
	}
	//style.loadFromFile("arial.ttf");

	options[0].setFont(style);
	options[0].setString("Start");
	options[0].setPosition(x / 2, y /2);
	options[0].setColor(sf::Color::White);

	options[1].setFont(style);
	options[1].setString("Scoreboard");
	options[1].setPosition(x / 2, y / 3);
	options[1].setColor(sf::Color::White);

	options[2].setFont(style);
	options[2].setString("Exit");
	options[2].setPosition(x / 2, y / 4);
	options[2].setColor(sf::Color::White);
}

void Menu::display(sf::RenderWindow& window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(options[i]);
	}
}

//void Menu::gameMenu()
//{
//	/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
//	{
//
//	}
//
//	sf::Vector2i trackPosition = sf::Mouse::getPosition();*/
//
//	sf::Text options;
//	sf::Font type;
//	type.
//}