#pragma once
#include "Item.h"

class Weapon : public Item
{
protected:
	int damageMin;
	int damageMax;

public:
	Weapon();
	Weapon(int dmin, int dmax, string n, int l, int s, int b, int r);
	virtual ~Weapon();

	virtual Weapon* clone()const;

	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }

	void setDamageMin(int d) { this->damageMin = d; }
	void setDamageMax(int d) { this->damageMax = d; }

	string toString();
};

