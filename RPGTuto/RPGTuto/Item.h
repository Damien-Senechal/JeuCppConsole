#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Item
{
protected:
	//attributes
	string name;
	int level;
	int sellValue;
	int buyValue;
	int rarity;

public:
	//constructors
	Item();
	Item(string n, int l, int s, int b, int r);
	virtual ~Item();

	virtual Item* clone()const = 0;

	//getters
	inline const string& getName() const { return this->name; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getSellValue() const { return this->sellValue; }
	inline const int& getBuyValue() const { return this->buyValue; }
	inline const int& getRarity() const { return this->rarity; }

	//setters
	void setName(string n) { this->name = n; }
	void setLevel(int l) { this->level = l; }
	void setSellValue(int s) { this->sellValue= s; }
	void setBuyValue(int b) { this->buyValue = b; }
	void setRarity(int r) { this->rarity = r; }

	//methods
	inline string debugPrint() const { return this->name; }
};

