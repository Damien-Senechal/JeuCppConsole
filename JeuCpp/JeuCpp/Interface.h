#pragma once
#include"Grid.h"

class Interface
{
protected:
	int displayMode;
	Grid g;

public:
	Interface();
	Interface(int d, Grid grid);

	void display();
};

