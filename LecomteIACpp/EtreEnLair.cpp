#include "EtreEnLair.h"
#include "GameManager.h"

bool EtreEnLair::Require() {
	GameManager* gm;
	state tmp = gm->getInstance()->getState();
	if (tmp == 1) {
		
		std::cout << "Etre en l'air : Validée" << std::endl;
		return true;
	}
	std::cout << "Etre en l'air : Refusé" << std::endl;
	return false;
}