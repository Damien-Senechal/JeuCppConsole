#pragma once
#include <ctime>
#include "Character.h"

class Game
{
protected:
	//attributes
	int choice;
	bool playing;

	Character character;

public:
	//constructors
	Game();
	virtual ~Game();

	//getters
	bool getPlaying() const;

	//setters
	void setChoice(int c);
	void setPlaying(bool p);

	//methods
	void mainMenu();
	void initGame();

};

