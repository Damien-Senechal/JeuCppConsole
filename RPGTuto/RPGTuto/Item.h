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
	int sellValue;
	int buyValue;

public:
	//constructors
	Item();
	virtual ~Item();

	//getters

	//setters

	//methods
	inline string debugPrint() const { return this->name; }
};

