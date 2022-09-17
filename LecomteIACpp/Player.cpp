#include "Player.h"
#include "Action.h"

Player::Player() {
	this->score = 0;
}

Action* Player::getAction(int index) {
	return actions[index];
}

int Player::NbAction() {
	int ret = 0;
	return ret = actions.size();
}

std::vector<Action*> Player::GetActionsCopy() {
	std::vector<Action*> tmp;

	for (int i = 0; i < NbAction(); i++) {
		tmp.push_back(getAction(i));
	}
	return tmp;
}