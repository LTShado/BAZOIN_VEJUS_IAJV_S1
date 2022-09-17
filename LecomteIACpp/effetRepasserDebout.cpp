#include "effetRepasserDebout.h"
#include "GameManager.h"

void effetRepasserDebout::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Debout);
}
effetRepasserDebout::effetRepasserDebout() {

}

bool effetRepasserDebout::ValidateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	if (gm->getState() == state::Debout) {
		return true;
	}
	else {
		return false;
	}
}