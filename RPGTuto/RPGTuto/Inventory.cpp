#include "Inventory.h"

Inventory::Inventory()
{
	this->cap = 10;
	this->nbrOfItems = 0;
	this->itemArray = new Item * [this->cap];
}

Inventory::~Inventory()
{
	for (size_t i = 0; i < this->nbrOfItems; i++)
	{
		delete this->itemArray[i];
	}
	delete[] itemArray;
}

Inventory::Inventory(const Inventory& obj)
{
	setCap(obj.cap);
	setNbrOfItems(obj.nbrOfItems);
	this->itemArray = new Item * [getCap()];

	for (size_t i = 0; i < getNbrOfItems(); i++)
	{
		this->itemArray[i] = obj.itemArray[i]->clone();
	}

	init(getNbrOfItems());
}

Item& Inventory::operator[](const int index)
{
	if (index < 0 || index >= getNbrOfItems()) 
	{
		throw("BAD INDEX !");
	}
	return *this->itemArray[index];
}

void Inventory::expand()
{
	this->cap *= 2;

	Item** tempArray = new Item * [this->cap];

	for (size_t i = 0; i < this->nbrOfItems; i++)
	{
		tempArray[i] = this->itemArray[i];
	}

	delete[] this->itemArray;

	this->itemArray = tempArray;

	this->init(this->nbrOfItems);
}

void Inventory::init(const int from)
{
	for (size_t i = from; i < this->cap; i++)
	{
		this->itemArray[i] = nullptr;
	}
}

void Inventory::addItem(const Item& item)
{
	if (this->nbrOfItems >= this->cap) {
		expand();
	}

	this->itemArray[this->nbrOfItems++] = item.clone();
}

void Inventory::removeItem(int index)
{

}
