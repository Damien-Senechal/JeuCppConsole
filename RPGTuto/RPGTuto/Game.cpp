#include "Game.h"

Game::Game()
{
	choice = 0;
	playing = true;
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
	choice = c;
}

void Game::setPlaying(bool p)
{
	playing = p;
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

	cout << endl << "Choice : " << endl;

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
	default:
		break;

	}

}
