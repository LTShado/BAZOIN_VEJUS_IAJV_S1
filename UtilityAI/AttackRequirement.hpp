#pragma once
#include "Requirement.hpp"
class AttackRequirement : public Requirement {
public:
	AttackRequirement(int MP) : Requirement(MP) {};
};