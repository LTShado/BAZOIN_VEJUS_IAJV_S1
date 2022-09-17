#include "VieDeLaTete.h"
#include "GameManager.h"

bool VieDeLaTete::Require() {
	GameManager* gm = GameManager::getInstance();
	VieManequin* tmp = gm->getManequin();

	if (tmp->VieTete > 0) {
		std::cout << "Vie de la Tete : Valid�" << std::endl;
		return true;
	}
	std::cout << "Vie de la Tete : Refus�" << std::endl;
	return false;
}