#include "Game.h"

Game::Game()
{
	this->choice = 0;
	this->playing = true;

	this->activeCharacter = 0;
	fileName = "characters.txt";

}

Game::~Game()
{
}

bool Game::getPlaying() const
{
	return this->playing;
}

void Game::setChoice(int c)
{
	this->choice = c;
}

void Game::setPlaying(bool p)
{
	this->playing = p;
}

void Game::mainMenu()
{
	int answer;
	cout << "MAIN MENU" << endl;
	cout << "0: Quit" << endl;
	cout << "1: Travel" << endl;
	cout << "2: Shop" << endl;
	cout << "3: Level Up" << endl;
	cout << "4: Rest" << endl;
	cout << "5: Character Sheet" << endl;
	cout << "6: Create new character" << endl;
	cout << "7: Save characters" << endl;
	cout << "8: Load characters" << endl;
	cout << endl;

	cout << endl << "Choice : " << endl;
	cout << endl;

	cin >> answer;
	setChoice(answer);

	switch (choice) 
	{

	case 0:
		setPlaying(false);
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		characters[activeCharacter].printStats();
		break;
	case 6:
		cin.ignore();
		createNewCharacter();
		saveCharacters();
		break;
	case 7:
		saveCharacters();
		break;
	case 8:
		loadCharacters();
		break;
	default:
		break;
	}

}

void Game::initGame()
{
	Inventory inv;
	inv.addItem(Weapon(0, 0, "Wep1", 0, 0, 0, 0));
	inv.addItem(Weapon(0, 0, "Wep2", 0, 0, 0, 0));
	inv.addItem(Weapon(0, 0, "Wep3", 0, 0, 0, 0));
	inv.addItem(Armor(0, 0, "Arm1", 0, 0, 0, 0));
	inv.addItem(Armor(0, 0, "Arm2", 0, 0, 0, 0));
	inv.addItem(Armor(0, 0, "Arm3", 0, 0, 0, 0));

	for (size_t i = 0; i < inv.size(); i++)
	{
		cout << inv[i].debugPrint() << endl;
	}

	createNewCharacter();
}

void Game::createNewCharacter()
{

	string name = "";
	cout << "Character Name : ";
	getline(cin, name);

	characters.push_back(Character());
	setActiveCharacter(characters.size() - 1);
	characters[getActiveCharacter()].init(name);
}

void Game::saveCharacters()
{
	ofstream outFile(getFileName());

	if (outFile.is_open()) 
	{
		for (size_t i = 0; i < characters.size(); i++)
		{
			outFile << characters[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

void Game::loadCharacters()
{

}
