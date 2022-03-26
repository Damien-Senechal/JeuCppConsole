#include<time.h>
#include"Interface.h"

int main() 
{
	Grid g = Grid(20, 20);

	Interface i = Interface(1, g);
	i.display();
}