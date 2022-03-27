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
	void init(const int from = 0);

public:
	//constructors
	Inventory();
	virtual ~Inventory();
	Inventory(const Inventory& obj);
	inline int size()const { return getNbrOfItems(); }
	Item& operator[](const int index);

	//getters
	inline const int& getCap() const { return this->cap; }
	inline const int& getNbrOfItems() const { return this->nbrOfItems; }

	//setters
	void setCap(int c) { this->cap = c; }
	void setNbrOfItems(int n) { this->nbrOfItems = n; }

	//methods
	void addItem(const Item& item);
	void removeItem(int index);
	inline void debugPrint() const { for (size_t i = 0; i < this->nbrOfItems; i++) { cout << this->itemArray[i]->debugPrint() << endl; } }

};
