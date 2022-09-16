#pragma once
#include "Action.h"
class Baisser : public Action
{
public:
	void Act(VieManequin*) override;
	Baisser();
};

