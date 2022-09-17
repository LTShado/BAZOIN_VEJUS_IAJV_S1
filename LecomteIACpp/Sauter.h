#pragma once
#ifndef SAUTER_H

#define SAUTER_H
#include "Action.h"

class GameManager;
class EffetMonter;

class Sauter : public Action
{
public :
	int cost = 2;
	void Act() override;
	Sauter();
};

#endif // !SAUTER_H