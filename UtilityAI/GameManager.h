#pragma once
#include "WhoStart.h"
#include "Player.h"
#include "Turn.h"
#include "Fight.h"
#include "AI.hpp"
class GameManager
{
public:
	void Init();
	WhoStart start;
	Turn turn;
	Fight fight;

	void GameState();

private:

};

