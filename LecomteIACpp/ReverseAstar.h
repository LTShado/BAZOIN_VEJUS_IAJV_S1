#pragma once
#ifndef REVERSEASTAR_H
#define REVERSEASTAR_H
#include <vector>
class Player;

class ReverseAstar
{	
public :
	std::vector<Action*> GoapActions;
	std::vector<prerequis*> GoapPreconditions;
	ReverseAstar();
	void startSimu();
	std::vector<Action*> SimuActions;
	std::vector<effet*> SimuEffects;

	effet* checkPrecondition(prerequis* p);
};

#endif // !REVERSEASTAR_H