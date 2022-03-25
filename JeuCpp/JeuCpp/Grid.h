#pragma once
#include"Point.h"

class Grid
{
protected:
	int sizeX, sizeY;
	vector<vector<Point>> grid;

public:
	Grid();
	Grid(int x, int y);

	vector<vector<Point>> getGrid();
	void setGrid(vector<vector<Point>> g);
	void setSizeX(int x);
	void setSizeY(int y);
	int getSizeX();
	int getSizeY();

	Point getGridPoint(int x, int y);
};

