#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"
#include "Menu.h"
#include "Flag.h"

int main(void)
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Minesweeper");
	const int sizeX = 50;
	const int sizeY = 50;
	const int preset1 = 9;
	const int preset2 = 16;
	const int preset3 = 25;
	vector<Flag> flags;

	Menu menu(window.getSize().x, window.getSize().y);

	/*Board grid(preset1, "number");
	for (int x = 0; x < preset1; x++)
	{
		for (int y = 0; y < preset1; y++)
		{
			grid.getCell(x, y)->setSize(sf::Vector2f(sizeX, sizeY));
			grid.getCell(x, y)->setPosition((x * sizeX) + 275, (y * sizeY) + 275);
			grid.getCell(x, y)->setFillColor(sf::Color::Yellow);
			grid.getCell(x, y)->setOutlineThickness(2.f);
			grid.getCell(x, y)->setOutlineColor(sf::Color::Black);
		}
	}

	Board coverGrid(preset1, "cover");
	for (int x = 0; x < preset1; x++)
	{
		for (int y = 0; y < preset1; y++)
		{
			coverGrid.getCell(x, y)->setSize(sf::Vector2f(sizeX, sizeY));
			coverGrid.getCell(x, y)->setPosition((x * sizeX) + 275, (y * sizeY) + 275);
			coverGrid.getCell(x, y)->setFillColor(sf::Color::White);
			coverGrid.getCell(x, y)->setOutlineThickness(2.f);
			coverGrid.getCell(x, y)->setOutlineColor(sf::Color::Black);
		}
	}*/
	
	sf::Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			
		}
		
		//else if (sf::Mouse::isButtonPressed(sf::Mouse::Right) && 
		//	sf::Mouse::getPosition(window).x < window.getSize().x && sf::Mouse::getPosition(window).x > 0 && 
		//	sf::Mouse::getPosition(window).y < window.getSize().y && sf::Mouse::getPosition(window).y > 0) 
		//{
		//	//flag operations
		//	int cellX = sf::Mouse::getPosition(window).x / cellWidth;
		//	int cellY = sf::Mouse::getPosition(window).y / cellHeight;
		//	if (flags.getCell(cellX, cellY).getCovered())
		//	{
		//		(flags.getCell(cellX, cellY).placeFlag());
		//	}

		window.clear();

		/*for (int x = 0; x < preset1; x++)
		{
			for (int y = 0; y < preset1; y++)
			{
				window.draw(*(grid.getCell(x, y)));

			}
		}

		for (int x = 0; x < preset1; x++)
		{
			for (int y = 0; y < preset1; y++)
			{
				window.draw(*(coverGrid.getCell(x, y)));

			}
		}*/
		
		menu.display(window);

		window.display();
	}

	return 0;
}