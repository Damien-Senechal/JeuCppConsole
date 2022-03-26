#include "Interface.h"

using namespace std;

Interface::Interface()
{
	displayMode = 0;
	g = Grid();
}

Interface::Interface(int d, Grid grid)
{
	displayMode = d;
	g = grid;
}

int Interface::getDisplayMode() const
{
	return displayMode;
}

Grid Interface::getGrid() const
{
	return g;
}

void Interface::display()
{
	HANDLE console;
	console = GetStdHandle(STD_OUTPUT_HANDLE);
		if (displayMode == 1) {
			Grid grid = g;

			for (int i = 0; i < grid.getSizeX(); i++) {
				for (int j = 0; j < grid.getSizeY(); j++) {
					if (grid.getGridPoint(i,j).getCharToPrint() == 0) {
						SetConsoleTextAttribute(console, 119); // rouge
						cout << "XX";
					}
					else if (grid.getGridPoint(i, j).getCharToPrint() == 1) {
						SetConsoleTextAttribute(console, 204); // rouge
						cout << "XX";
					}
				}
				cout << endl;
			}
		}
		SetConsoleTextAttribute(console, 15);
}
