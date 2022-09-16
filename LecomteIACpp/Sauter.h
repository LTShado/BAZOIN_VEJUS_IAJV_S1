#pragma once
#include "Action.h"
class Sauter : public Action
{
public :
	void Act(VieManequin*) override;
	Sauter();
};

