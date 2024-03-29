#include "Character.h"

Character::Character()
{
	this->name = "NONE";
	this->xPos = 0.0;
	this->yPos = 0.0;
	this->level = 0;
	this->exp = 0;
	this->expNext = 0;

	this->strength = 0;
	this->vitality = 0;
	this->dexterity = 0;
	this->intelligence = 0;

	this->hp = 0;
	this->hpMax = 0;
	this->stamina = 0;
	this->staminaMax = 0;
	this->damageMin = 0;
	this->damageMax = 0;
	this->defense = 0;
	this->luck = 0;

	this->statPoints = 0;
	this->skillPoints = 0;
}

Character::~Character()
{
}

void Character::init(string n)
{
	this->name = n;
	this->xPos = 0.0;
	this->yPos = 0.0;
	this->level = 1;
	this->exp = 0;
	this->expNext = (50/3) * ( (pow((getLevel() + 1), 3) - 6 * pow((getLevel() + 1), 2)) + 17 * (getLevel() + 1) - 12);

	this->strength = 5;
	this->vitality = 5;
	this->dexterity = 5;
	this->intelligence = 5;

	this->hpMax = (getVitality() * 2) + (getStrength() / 2);
	this->hp = getHpMax();
	this->staminaMax = getVitality() + (getStrength() / 2) + (getDexterity() / 3);
	this->stamina = getStaminaMax();
	this->damageMin = getStrength();
	this->damageMax = getStrength() + 2;
	this->defense = getDexterity() + (getIntelligence()/2);
	this->luck = getIntelligence();

	this->statPoints = 0;
	this->skillPoints = 0;
}

void Character::printStats() const
{
	cout << "===== Character Sheet =====" << endl;
	cout << "= Name : " << getName() << endl;
	cout << "= Level : " << getLevel() << endl;
	cout << "= Exp : " << getExp() << endl;
	cout << "= Exp to next level : " << getExpNext() << endl;
	cout << setw(27) << setfill('=') << "" << endl;
	cout << "= Strength : " << getStrength() << endl;
	cout << "= Vitality : " << getVitality() << endl;
	cout << "= Dexterity : " << getDexterity() << endl;
	cout << "= Intelligence : " << getIntelligence() << endl;
	cout << setw(27) << setfill('=') << "" << endl;
	cout << "= HP : " << getHp() << "/" << getHpMax() << endl;
	cout << "= Stamina : " << getStamina() << "/" << getStaminaMax() << endl;
	cout << "= Damage : " << getDamageMin() << "-" << getDamageMax() << endl;
	cout << "= Defense : " << getDefense() << endl;
	cout << "= Luck : " << getLuck() << endl;
	cout << endl;
}

void Character::levelUp()
{
	while (getExp() >= getExpNext())
	{
		setExp(getExp() - getExpNext());
		setLevel(getLevel() + 1);
		setExpNext((50 / 3) * ((pow((getLevel()+1), 3) - 6 * pow((getLevel() + 1), 2)) + 17 * (getLevel() + 1) - 12));

		setStatPoints(getStatPoints() + 1);
		setSkillPoints(getSkillPoints()+1);
	}
}

string Character::getAsString() const
{
	return to_string(xPos) + " "
		+ to_string(yPos) + " "
		+ getName() + " "
		+ to_string(level) + " "
		+ to_string(exp) + " "
		+ to_string(strength) + " "
		+ to_string(vitality) + " "
		+ to_string(dexterity) + " "
		+ to_string(intelligence) + " "
		+ to_string(hp) + " "
		+ to_string(stamina) + " "
		+ to_string(statPoints) + " "
		+ to_string(skillPoints);
}
