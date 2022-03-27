#include "Weapon.h"

Weapon::Weapon()
	: Item()
{
	this->damageMin = 0;
	this->damageMax = 0;
}

Weapon::Weapon(int dmin, int dmax, string n, int l, int s, int b, int r)
	: Item(n, l, s, b, r)
{
	setDamageMin(dmin);
	setDamageMax(dmax);
}

Weapon::~Weapon()
{
}

Weapon* Weapon::clone() const
{
	return new Weapon(*this);
}

string Weapon::toString()
{
	return to_string(getDamageMin()) + " " +
		to_string(getDamageMax());
}
