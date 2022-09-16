#include "Player.h"

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