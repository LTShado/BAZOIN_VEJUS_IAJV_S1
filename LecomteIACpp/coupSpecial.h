#pragma once
#ifndef COUPSPECIAL_H
#define COUPSPECIAL_H


#include "Action.h"
class CoupSpecial : public Action
{
public :
	int cost = 6;
	void Act() override;
	CoupSpecial();
};

#endif // !COUPSPECIAL_H