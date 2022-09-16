#include "AI.hpp"

std::vector<Action*> AI::TestActions(const std::vector<Action*> actions)const {
	std::vector<Action*> PossibleActions;
	for (Action* act : actions) {
		if (act->checkPossibleAction(MP)) {
			PossibleActions.push_back(act);
		}
	}
	return PossibleActions;
}