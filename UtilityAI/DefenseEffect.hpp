#pragma once
#include "Effect.hpp"
class DefenseEffect : public Effect {
	void Execute(Player* me) {
		me->isDefending = true;
	}
};