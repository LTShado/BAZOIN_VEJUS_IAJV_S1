#include "EtreDebout.h"
#include "GameManager.h"
bool EtreDebout::Require() {
	GameManager* gm;
	state tmp = gm->getInstance()->getState();

	if (tmp == 2) {
		std::cout << "Etre Debout : Valid�" << std::endl;
		return true;
	}
	std::cout << "Etre Debout : Refus�" << std::endl;
	return false;
}