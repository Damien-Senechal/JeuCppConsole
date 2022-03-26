#pragma once
#include <string>

using namespace std;

class Character
{
protected:
	//attributes
	string name;
	double xPos, yPos;
	int level, exp, expNext, hp, hpMax, stamina, damageMin, damageMax, defense;

public:
	//constructors
	Character();
	virtual ~Character();

	//getters
	inline const string& getName() const { return this->name; }
	inline const double& getXPos() const { return this->xPos; }
	inline const double& getYPos() const { return this->yPos; }
	inline const int& getLevel() const { return this->level; }
	inline const int& getExp() const { return this->exp; }
	inline const int& getExpNext() const { return this->expNext; }
	inline const int& getHp() const { return this->hp; }
	inline const int& getHpMax() const { return this->hpMax; }
	inline const int& getStamina() const { return this->stamina; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefense() const { return this->defense; }

	//setters
	void setName(string n) { name = n; }
	void setXPos(double x) { xPos = x; }
	void setYPos(double y) { yPos = y; }
	void setLevel(int l) { level = l; }
	void setExp(int e) { exp = e; }
	void setExpNext(int e) { expNext = e; }
	void setHp(int h) { hp = h; }
	void setHpMax(int h) { hpMax = h; }
	void setStamina(int s) { stamina = s; }
	void setDamageMin(int d) { damageMin = d; }
	void setDamageMax(int d) { damageMax = d; }
	void setDefense(int d) { defense = d; }

	//methods
	void init(string n, int l);
};

