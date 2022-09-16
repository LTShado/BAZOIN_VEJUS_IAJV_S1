#pragma once
#include "Action.h"
class AttaquerDebout : public Action
{
public :
	void Act(VieManequin*) override;
	AttaquerDebout();
};

