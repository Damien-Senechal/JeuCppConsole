#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Character
{
protected:
	//attributes
	string name;
	double xPos, yPos;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int level, exp, expNext, hp, hpMax, stamina, staminaMax, damageMin, damageMax, defense;

	int statPoints;
	int skillPoints;

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
	inline const int& getStaminaMax() const { return this->staminaMax; }
	inline const int& getDamageMin() const { return this->damageMin; }
	inline const int& getDamageMax() const { return this->damageMax; }
	inline const int& getDefense() const { return this->defense; }

	inline const int& getStrength() const { return this->strength; }
	inline const int& getVitality() const { return this->vitality; }
	inline const int& getDexterity() const { return this->dexterity; }
	inline const int& getIntelligence() const { return this->intelligence; }

	inline const int& getStatPoints() const { return this->statPoints; }
	inline const int& getSkillPoints() const { return this->skillPoints; }

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
	void setStaminaMax(int s) { staminaMax = s; }
	void setDamageMin(int d) { damageMin = d; }
	void setDamageMax(int d) { damageMax = d; }
	void setDefense(int d) { defense = d; }

	void setStrength(int s) { strength = s; }
	void setVitality(int v) { vitality = v; }
	void setDexterity(int d) { dexterity = d; }
	void setIntelligence(int i) { intelligence = i; }

	void setStatPoints(int s) { statPoints = s; }
	void setSkillPoints(int s) { skillPoints = s; }

	//methods
	void init(string n);
	string getAsString() const;
	void levelUp();
};

