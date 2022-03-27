#pragma once
#include <ctime>
#include <vector>
#include <fstream>
#include "Character.h"

class Game
{
protected:
	//attributes
	int choice;
	bool playing;

	int activeCharacter;
	vector<Character> characters;
	string fileName;

public:
	//constructors
	Game();
	virtual ~Game();

	//getters
	inline const int& getChoice() const { return this->choice; }
	bool getPlaying() const;

	inline const int& getActiveCharacter() const { return this->activeCharacter; }
	inline const string& getFileName() const { return this->fileName; }

	//setters
	void setChoice(int c);
	void setPlaying(bool p);
	void setActiveCharacter(int a) { this->activeCharacter = a; }
	void setCharacters(vector<Character> c) { this->characters = c; }
	void setFileName(string f) { this->fileName = f; }

	//methods
	void mainMenu();
	void initGame();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();

};

