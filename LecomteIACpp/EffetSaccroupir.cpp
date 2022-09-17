#include "EffetSaccroupir.h"


void EffetSaccroupir::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Accroupi);

}

EffetSaccroupir::EffetSaccroupir() {

}

bool EffetSaccroupir::ValidateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	if (gm->getState() == state::Accroupi) {
		return true;
	}
	else {
		return false;
	}
}