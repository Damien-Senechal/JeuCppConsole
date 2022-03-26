#include "Point.h"


Point::Point()
{
	CoordX = 0;
	CoordY = 0;
	charToPrint = 0;
}

Point::Point(int x, int y)
{
	CoordX = x;
	CoordY = y;
	charToPrint = 0;
}

Point::Point(int x, int y, int c)
{
	CoordX = x;
	CoordY = y;
	charToPrint = c;
}

int Point::getCoordX() const
{
	return	CoordX;
}

int Point::getCoordY() const
{
	return CoordY;
}

int Point::getCharToPrint() const
{
	return charToPrint;
}

void Point::setCoordX(int x)
{
	CoordX = x;
}

void Point::setCoordY(int y)
{
	CoordY = y;
}

void Point::setCharToPrint(int c)
{
	charToPrint = c;
}

ostream& operator<<(ostream& os, Point const& p)
{
	os << "[" << p.getCoordX() << "," << p.getCoordY() << "]";
	return os;
}
