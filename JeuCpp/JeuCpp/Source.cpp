#include<time.h>
#include"Interface.h"

int main() 
{
	Grid g = Grid(10, 10);

	for (int i = 0; i < g.getSizeX(); i++) {
		for (int j = 0; j < g.getSizeY(); j++) {
			cout << g.getGrid()[i][j];
		}
		cout << endl;
	}
}