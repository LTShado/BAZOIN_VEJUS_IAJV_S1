#pragma once
#include "Action.hpp"
#include "AttackSpeRequirement.hpp"
class AttackSpe : protected Action {
private:
	std::string name = "AttackSpe";
public:
	AttackSpe(AttackSpeRequirement re, int w) :Action(re, w) {};
	virtual bool checkPossibleAction(int MP) const { if (MP >= require.MPneeded) return true; };
	float getUtility(const Player, const Player) const override;

};