#pragma once
#include <iostream>

#include <vector>
#include "VieManequin.h"
class prerequis;

class Action
{
private :
	int cost;
	std::vector<prerequis*> requirements;

public:
	virtual void Act(VieManequin*);
	bool Can();

	void SetCost(int c) { this->cost = c; };
	int GetCost()const { return this->cost; };

	void AddRequirements(prerequis* r);

	
};

