#pragma once
#ifndef BAISSER_H
#define BAISSER_H


#include "Action.h"
class Baisser : public Action
{
public:
	int cost = 2;
	void Act() override;
	Baisser();
};

#endif // !BAISSER_H