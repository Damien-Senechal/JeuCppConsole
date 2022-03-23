#pragma once
#include"Point.h"
#include<vector>

using namespace std;

class Grid
{
protected:
	int sizeX, sizeY;
	vector<vector<Point>> grid;

public:
	Grid(int x, int y);

	vector<vector<Point>> getGrid();
	void setGrid(vector<vector<Point>> g);
	void setSizeX(int x);
	void setSizeY(int y);
	int getSizeX();
	int getSizeY();

	Point getGridPoint(int x, int y);
};

