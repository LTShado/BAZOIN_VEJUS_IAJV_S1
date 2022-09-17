#include "VieDuTorse.h"
#include "GameManager.h"

bool VieDuTorse::Require() {
	GameManager* gm;
	VieManequin* tmp = gm->getInstance()->getManequin();

	if (tmp->VieTorse > 0) {
		std::cout << "Vie du Torse : Valid�" << std::endl;
		return true;
	}
	std::cout << "Vie du Torse : Refus�" << std::endl;
	return false;
}