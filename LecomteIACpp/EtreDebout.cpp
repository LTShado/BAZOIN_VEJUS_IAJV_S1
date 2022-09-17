#include "EtreDebout.h"
#include "GameManager.h"
bool EtreDebout::Require() {
	GameManager* gm;
	state tmp = gm->getInstance()->getState();

	if (tmp == 2) {
		std::cout << "Etre Debout : Validé" << std::endl;
		return true;
	}
	std::cout << "Etre Debout : Refusé" << std::endl;
	return false;
}