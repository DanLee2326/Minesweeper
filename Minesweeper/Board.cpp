#include "Board.h"

Board::Board(int dimension, std::string type)
{
	/*this->mWidth = newWidth;
	this->mHeight = newHeight;*/

	if (type == "number") {
		for (int i = 0; i < dimension /*newWidth*/; i++)
		{
			vector<Cell*> temp;
			for (int j = 0; j < dimension /*newHeight*/; j++)
			{

			}
			cellData.push_back(temp);
		}
	}
	else if (type == "cover") {

		for (int i = 0; i < dimension /*newWidth*/; i++)
		{
			vector<Cell*> temp;
			for (int j = 0; j < dimension /*newHeight*/; j++)
			{

			}
			cellData.push_back(temp);
		}

	}
}

void Board::setWidth(int newWidth)
{
	this->mWidth = newWidth;
}

int Board::getWidth() const
{
	return this->mWidth;
}

void Board::setHeight(int newHeight)
{
	this->mHeight = newHeight;
}

int Board::getHeight() const
{
	return this->mHeight;
}

Cell* Board::getCell(int xIndex, int yIndex) const
{
	
	return cellData.at(xIndex).at(yIndex);

}