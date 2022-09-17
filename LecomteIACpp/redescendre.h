#pragma once
#ifndef REDESCENDRE_H
#define REDESCENDRE_H

#include "Action.h"

class GameManager; 
class effetRepasserDebout ;

class Redescendre : public Action
{
public :
	int cost = 1;
	void Act() override;
	Redescendre();
};

#endif // !REDESCENDRE_H