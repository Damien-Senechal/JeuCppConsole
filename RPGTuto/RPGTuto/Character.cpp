#include "Character.h"

Character::Character()
{
	name = "NONE";
	xPos = 0;
	yPos = 0;
	level = 0;
	exp = 0;
	expNext = 0;
	hp = 0;
	hpMax = 0;
	stamina = 0;
	damageMin = 0;
	damageMax = 0;
	defense = 0;
}

Character::~Character()
{
}

void Character::init(string n, int l)
{
	name = n;
	xPos = 0;
	yPos = 0;
	level = l;
	exp = 0;
	expNext = l*100;
	hp = 10;
	hpMax = 10;
	stamina = 10;
	damageMin = 2;
	damageMax = 4;
	defense = 1;
}
