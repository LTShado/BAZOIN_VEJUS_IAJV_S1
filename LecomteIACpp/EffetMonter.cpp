#include "EffetMonter.h"
#include "GameManager.h"

void EffetMonter::activateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	gm->setState(state::Enlair);
}

EffetMonter::EffetMonter() {

}
bool EffetMonter::ValidateEffect(VieManequin* mannequin) {
	GameManager* gm = GameManager::getInstance();
	if (gm->getState()== state::Enlair) {
		return true;
	}
	else {
		return false;
	}
	
}