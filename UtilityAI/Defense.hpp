#pragma once
#include "Action.hpp"
#include "DefenseRequirement.hpp"
class Defense : protected Action{
private:
	std::string name = "Defense";
public:
	Defense(DefenseRequirement re, int w) :Action(re, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player, const float) const;
};