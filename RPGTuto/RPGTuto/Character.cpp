#include "Character.h"

Character::Character()
{
	name = "NONE";
	xPos = 0.0;
	yPos = 0.0;
	level = 0;
	exp = 0;
	expNext = 0;

	strength = 0;
	vitality = 0;
	dexterity = 0;
	intelligence = 0;

	hp = 0;
	hpMax = 0;
	stamina = 0;
	staminaMax = 0;
	damageMin = 0;
	damageMax = 0;
	defense = 0;
	statPoints = 0;
	skillPoints = 0;
}

Character::~Character()
{
}

void Character::init(string n)
{
	name = n;
	xPos = 0.0;
	yPos = 0.0;
	level = 1;
	exp = 0;
	expNext = (50/2)*(pow(getLevel(), 2) - 6 * pow(getLevel(), 2) + (17 * getLevel()) - 11);

	strength = 5;
	vitality = 5;
	dexterity = 5;
	intelligence = 5;

	hp = 10;
	hpMax = 10;
	stamina = 10;
	staminaMax = 10;
	damageMin = 2;
	damageMax = 4;
	defense = 1;
	statPoints = 0;
	skillPoints = 0;
}

/*string Character::getAsString() const
{
	cout << "= Character Sheet =" << endl;
	cout << "= Name : " << getName() << endl;
	cout << "= Level : " << getLevel() << endl;
	cout << "= Exp : " << getExp() << endl;
	cout << "= Exp to next level : " << getExp() << endl;
	cout << setw(10) << setfill('=') << getExp() << endl;
	cout << "= Strength : " << getExp() << endl;
	cout << "= Vitality : " << getExp() << endl;
	cout << "= Dexterity : " << getExp() << endl;
	cout << "= Intelligence : " << getExp() << endl;
	cout << setw(10) << setfill('=') << getExp() << endl;
	cout << "= HP : " << getHp() << "/" << getHpMax() << endl;
	cout << "= Stamina : " << getStamina() << "/" << getStaminaMax() << endl;
}*/

void Character::levelUp()
{
	while (getExp() >= getExpNext())
	{
		setExp(getExp() - getExpNext());
		setLevel(getLevel() + 1);
		setExpNext((50 / 2) * (pow(getLevel(), 2) - 6 * pow(getLevel(), 2) + (17 * getLevel()) - 11));

		setStatPoints(getStatPoints() + 1);
		setSkillPoints(getSkillPoints()+1);
	}
}
