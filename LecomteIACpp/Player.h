#pragma once
#ifndef PLAYER_H
#define PLAYER_H


#include "AttaqueAerienne.h"
#include "AttaqueBaisser.h"
#include "AttaquerDebout.h"
#include "Baisser.h"
#include "redescendre.h"
#include "relever.h"
#include "Sauter.h"
#include "coupSpecial.h"
#include <vector>
#include "prerequis.h"
class Action;
class Player
{
private :
	int score = 0;
	std::vector<Action*> actions;
	
public:
	Action* currentAction;
	Action* lastAction;
	Player();
	int NbAction();
	void AddAction(Action* action) { actions.push_back(action); };
	Action* getAction(int index);
	std::vector<Action*> GetActionsCopy();

};

#endif // !PLAYER_H