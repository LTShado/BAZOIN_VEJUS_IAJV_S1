#pragma once
#include "Requirement.hpp"
#include "AttackRequirement.hpp"
#include "Player.h"
#include <algorithm>

class Action {
protected:
	Requirement require;
	int weigth;
public:
	Action(Requirement requi, int w) : require(requi), weigth(w) {};
	virtual Requirement getRequire() const { return require; };
	virtual int getWeigth() const { return weigth; };
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	virtual float getUtility(const Player, const Player) const { return 1.0f; };
};