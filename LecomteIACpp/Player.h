#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
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