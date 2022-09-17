#include "VieDesJambes.h"
#include "GameManager.h"

bool VieDesJambes::Require() {
	GameManager* gm;
	VieManequin* tmp = gm->getInstance()->getManequin();
	if (tmp->VieJambes > 0) {
		std::cout << "Vie des Jambes : Validé" << std::endl;
		return true;
	}
	std::cout << "Vie des Jambes : Refusé" << std::endl;
	return false;
}