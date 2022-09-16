#include <iostream>
using namespace std;
#include "GameManager.h"

void GameManager::Init() {
	GameState();
}

void GameManager::GameState() {
	bool gamestate = true;
	while (gamestate == true)
	{
		if (start.WhoStartRandomiser() == 1) {
			cout << "Youre 1st \n";
			turn.PlayerTurn(1);
			gamestate = false;
		}
		else {
			cout << "Youre 2nd \n";
			turn.PlayerTurn(0);
			gamestate = false;
		}
	}
}