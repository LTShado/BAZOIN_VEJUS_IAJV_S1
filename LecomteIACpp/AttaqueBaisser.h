#pragma once
#include "Action.h"
class AttaqueBaisser : public Action
{
public :
	void Act(VieManequin*) override;
	AttaqueBaisser();
};

