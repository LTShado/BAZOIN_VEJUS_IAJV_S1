#include "Player.h"

Player::Player() {
	this->HP = 100;
	this->MP = 30;
	this->str = 10;
	this->isBuffed = false;
	this->isDeBuffed = false;
	this->isDefending = false;
	this->turnLeftBuff = 0;
	this->turnLeftDeBuff = 0;
}
void Player::CheckEndBuffNDebuff() {
	if (this->isBuffed) {
		turnLeftBuff -= 1;
		if (turnLeftBuff <= 0) {
			this->isBuffed = false;
			this->str-=5;
		}
	}
	if (this->isDeBuffed) {
		turnLeftDeBuff -= 1;
		if (turnLeftDeBuff <= 0) {
			this->isDeBuffed = false;
			this->str+=5;
		}
	}
}