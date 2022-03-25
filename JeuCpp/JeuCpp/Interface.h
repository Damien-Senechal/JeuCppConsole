#pragma once
#include"Grid.h"

class Interface
{
protected:
	int displayMode;
	Grid g;

public:
	Interface();
	Interface(Grid grid);

	void display(int x);
};

