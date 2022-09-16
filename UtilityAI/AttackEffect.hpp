#pragma once
#include "Effect.hpp"
class AttackEffect : public Effect {
public:
	void Execute(Player* me, Player* enemy) { 
		if (enemy->isDefending == true) {
			enemy->HP -= me->str - 2;
		}
		else {
			enemy->HP -= me->str;
		}
	}
};