#pragma once
#ifndef RELEVER_H
#define RELEVER_H


#include "Action.h"
class Relever : public Action
{
public :
	int cost = 1;
	void Act() override;
	Relever();
};

#endif // !RELEVER_H