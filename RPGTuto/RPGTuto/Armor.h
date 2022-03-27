#pragma once
#include "Item.h"

class Armor : public Item
{
protected:
	int type;
	int defense;

public:
	Armor();
	Armor(int t, int d, string n, int l, int s, int b, int r);
	virtual ~Armor();

	virtual Armor* clone()const;

	inline const int& getType() const { return this->type; }
	inline const int& getDefense() const { return this->defense; }

	void setType(int t) { this->type = t; }
	void setDefense(int d) { this->defense = d; }

	string toString();
};

