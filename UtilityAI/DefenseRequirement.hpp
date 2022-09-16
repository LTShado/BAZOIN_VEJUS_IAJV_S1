#pragma once
#include "Requirement.hpp"
class DefenseRequirement : public Requirement {
public:
	DefenseRequirement(int MP) : Requirement(MP) {};
};