#pragma once
#ifndef ATTAQUEBAISSER_H
#define ATTAQUEBAISSER_H

#include "Action.h"

class GameManager;
class BaisserVieJambe;

class AttaqueBaisser : public Action
{
public :
	int cost = 4;
	void Act() override;
	AttaqueBaisser();
};

#endif // !ATTAQUEBAISSER_H