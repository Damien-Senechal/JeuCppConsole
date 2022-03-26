#include "Grid.h"

Grid::Grid()
{
}

Grid::Grid(int x, int y)
{
	setSizeX(x);
	setSizeY(y);
	vector<vector<Point>> actualGrid;
	for (int i = 0; i < getSizeX(); i++) {
		actualGrid.push_back(vector<Point>(getSizeY()));
		for (int j = 0; j < getSizeY(); j++) {
			actualGrid[i][j] = Point(i, j);
		}
	}
	setGrid(actualGrid);
}

vector<vector<Point>> Grid::getGrid()
{
	return grid;
}

void Grid::setGrid(vector<vector<Point>> g)
{
	grid = g;
}

void Grid::setSizeX(int x)
{
	sizeX = x;
}

void Grid::setSizeY(int y)
{
	sizeY = y;
}

int Grid::getSizeX()
{
	return sizeX;
}

int Grid::getSizeY()
{
	return sizeY;
}

Point Grid::getGridPoint(int x, int y)
{
	return grid[x][y];
}
