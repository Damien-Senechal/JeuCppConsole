#pragma once
#include"Point.h"
#include<vector>

using namespace std;

class Grid
{
protected:
	vector<vector<Point>> grid;

public:
	Grid(int x, int y);
};

