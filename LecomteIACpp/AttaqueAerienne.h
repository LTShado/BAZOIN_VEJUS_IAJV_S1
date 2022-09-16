#pragma once
#include "Action.h"

class AttaqueAerienne : public Action
{
private :
	 void Act(VieManequin*) override ;

public:
	AttaqueAerienne();

};