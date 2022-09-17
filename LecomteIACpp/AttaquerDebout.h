#pragma once
#ifndef ATTAQUERDEBOUT_H
#define ATTAQUERDEBOUT_H


#include "Action.h"
class AttaquerDebout : public Action
{
public :
	int cost = 3;
	void Act() override;
	AttaquerDebout();
};

#endif // !ATTAQUERDEBOUT_H