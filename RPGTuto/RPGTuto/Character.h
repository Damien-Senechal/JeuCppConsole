#pragma once
#include "Inventory.h"

class Character
{
protected:
	//attributes
	string name;
	double xPos, yPos;

	Inventory inventory;
	Weapon weapon;
	Armor armor;

	int strength;
	int vitality;
	int dexterity;
	int intelligence;

	int level, exp, expNext, hp, hpMax, stamina, staminaMax, damageMin, damageMax, defense, luck;

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
	inline const int& getLuck() const { return this->luck; }

	inline const int& getStrength() const { return this->strength; }
	inline const int& getVitality() const { return this->vitality; }
	inline const int& getDexterity() const { return this->dexterity; }
	inline const int& getIntelligence() const { return this->intelligence; }

	inline const int& getStatPoints() const { return this->statPoints; }
	inline const int& getSkillPoints() const { return this->skillPoints; }

	//setters
	void setName(string n) { this->name = n; }

	void setXPos(double x) { this->xPos = x; }
	void setYPos(double y) { this->yPos = y; }

	void setLevel(int l) { this->level = l; }
	void setExp(int e) { this->exp = e; }
	void setExpNext(int e) { this->expNext = static_cast<int>(e); }
	void setHp(int h) { this->hp = h; }
	void setHpMax(int h) { this->hpMax = h; }
	void setStamina(int s) { this->stamina = s; }
	void setStaminaMax(int s) { this->staminaMax = s; }
	void setDamageMin(int d) { this->damageMin = d; }
	void setDamageMax(int d) { this->damageMax = d; }
	void setDefense(int d) { this->defense = d; }
	void setLuck(int l) { this->luck = l; }

	void setStrength(int s) { this->strength = s; }
	void setVitality(int v) { this->vitality = v; }
	void setDexterity(int d) { this->dexterity = d; }
	void setIntelligence(int i) { this->intelligence = i; }

	void setStatPoints(int s) { this->statPoints = s; }
	void setSkillPoints(int s) { this->skillPoints = s; }

	//methods
	void init(string n);
	void printStats() const;
	void levelUp();
	string getAsString() const;
};

