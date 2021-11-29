#include <SFML/Graphics.hpp>
#include <iostream>
#include "Board.h"

int main(void)
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Minesweeper");
	const int sizeX = 50;
	const int sizeY = 50;
	const int preset1 = 9;
	const int preset2 = 16;
	const int preset3 = 25;

	Board grid(preset1, "number");
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
	}

	/*CoverBoard coverGrid2[preset2][preset2];
	for (int x = 0; x < preset2; x++)
	{
		for (int y = 0; y < preset2; y++)
		{
			coverGrid2[x][y].setSize(sf::Vector2f(sizeX, sizeY));
			coverGrid2[x][y].setPosition(x * sizeX + 100, (y * sizeY) + 100);
			coverGrid2[x][y].setFillColor(sf::Color::White);
			coverGrid2[x][y].setOutlineThickness(2.f);
			coverGrid2[x][y].setOutlineColor(sf::Color::Black);
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

		window.clear();

		for (int x = 0; x < preset1; x++)
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
		}

		/*for (int x = 0; x < preset2; x++)
		{
			for (int y = 0; y < preset2; y++)
			{
				window.draw(coverGrid2[x][y]);
			}
		}*/

		window.display();
	}

	return 0;
}