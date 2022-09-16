#pragma once
#include "Effect.hpp"

class DeBuffEffect : public Effect {
	void Execute(Player* enemy) {
		enemy->isDeBuffed=true;
		enemy->str -= 5;
		enemy->turnLeftDeBuff = 2;
	}
};