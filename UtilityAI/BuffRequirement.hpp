#pragma once
#include "Requirement.hpp"
class BuffRequirement : public Requirement {
public:
	BuffRequirement(int MP) : Requirement(MP) {};
};