#include "Item.h"

Item::Item()
{
	this->name = "NONE";
	this->level = 0;
	this->buyValue = 0;
	this->sellValue = 0;
	this->rarity = 0;
}

Item::Item(string n, int l, int s, int b, int r)
{
	setName(n);
	setLevel(l);
	setSellValue(s);
	setBuyValue(b);
	setRarity(r);
}

Item::~Item()
{

}