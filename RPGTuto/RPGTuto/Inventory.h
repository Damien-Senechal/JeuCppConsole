#pragma once
#include "Armor.h"
#include "Weapon.h"

class Inventory
{
protected:
	//attributes
	int cap;
	int nbrOfItems;

	Item** itemArray;

	void expand();
	void init(const int form);

public:
	//constructors
	Inventory();
	virtual ~Inventory();

	//getters

	//setters

	//methods
	void addItem(const Item& item);
	void removeItem(int index);
	inline void debugPrint() const { for (size_t i = 0; i < this->nbrOfItems; i++) { cout << this->itemArray[i]->debugPrint() << endl; } }

};
