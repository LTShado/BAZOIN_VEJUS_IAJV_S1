#pragma once
#include "Action.h"
class CoupSpecial : public Action
{
public :
	void Act(VieManequin*) override;
	CoupSpecial();
};

