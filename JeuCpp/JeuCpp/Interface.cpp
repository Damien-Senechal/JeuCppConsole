#include "Interface.h"

using namespace std;

Interface::Interface()
{

}

Interface::Interface(Grid grid)
{
	int displayMode = 0;
	g = grid;
}

void Interface::display(int x)
{
	if (x == 1) {
		cout << "lol" << endl;
	}
}
