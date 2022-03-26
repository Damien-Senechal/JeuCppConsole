#include "Interface.h"

using namespace std;

Interface::Interface()
{

}

Interface::Interface(int d, Grid grid)
{
	displayMode = d;
	g = grid;
}

void Interface::display()
{
	bool update = true;
	while (update) {
		if (displayMode == 1) {
			Grid grid = g;

			for (int i = 0; i < grid.getSizeX(); i++) {
				for (int j = 0; j < grid.getSizeY(); j++) {
					cout << grid.getGrid()[i][j];
				}
				cout << endl;
			}
		}
		Sleep(200);
		system("CLS");
	}
}
