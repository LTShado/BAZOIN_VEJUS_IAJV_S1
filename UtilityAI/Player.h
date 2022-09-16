#pragma once

class Player
{
public:
	Player();
	int HP;
	int MP;
	int str;
	bool isBuffed;
	bool isDeBuffed;
	bool isDefending;
	int turnLeftDeBuff;
	int turnLeftBuff;
	void CheckEndBuffNDebuff();
};
