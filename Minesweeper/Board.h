#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Cell.h"

using std::vector;

class Board : public sf::RectangleShape
{
public:
	Board(int dimension, std::string type);

	void setWidth(int newWidth);
	int getWidth() const;

	void setHeight(int newHeight);
	int getHeight() const;

	Cell* getCell(int xIndex, int yIndex) const;

private:
	int mWidth;
	int mHeight;
	vector<vector<Cell*>> cellData;
};