#pragma once
#include<vector>
#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<string>

using namespace std;

class Point
{
protected:
	int CoordX, CoordY, charToPrint;

public:
	Point();
	Point(int x, int y);
	Point(int x, int y, int c);

	int getCoordX() const;
	int getCoordY() const;
	int getCharToPrint() const;

	void setCoordX(int x);
	void setCoordY(int y);
	void setCharToPrint(int c);

	friend ostream& operator<<(ostream& os, Point const& p);

};
