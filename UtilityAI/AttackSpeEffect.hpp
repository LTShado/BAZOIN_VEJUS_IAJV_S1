#pragma once
#include "Effect.hpp"
class AttackSpeEffect : public Effect {
	void Execute(Player* me, Player* enemy) {
		if (enemy->isDefending == true) {
			enemy->HP -= me->str - 1;
		}
		else {
			enemy->HP -= me->str;
		}
	}
	
};