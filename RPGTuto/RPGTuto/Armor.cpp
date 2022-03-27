#include "Armor.h"

Armor::Armor()
	:Item()
{
	this->type = 0;
	this->defense = 0;
}

Armor::Armor(int t, int d, string n, int l, int s, int b, int r)
	:Item(n, l, s, b, r)
{
	setType(t);
	setDefense(d);
}

Armor::~Armor()
{

}

Armor* Armor::clone() const
{
	return new Armor(*this);
}

string Armor::toString()
{
	return to_string(getType()) + " " +
		to_string(getDefense());
}
