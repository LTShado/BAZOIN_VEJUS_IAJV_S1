#include "VieDesJambes.h"
#include "GameManager.h"

bool VieDesJambes::Require() {
	GameManager* gm;
	VieManequin* tmp = gm->getInstance()->getManequin();
	if (tmp->VieJambes > 0) {
		std::cout << "Vie des Jambes : Valid�" << std::endl;
		return true;
	}
	std::cout << "Vie des Jambes : Refus�" << std::endl;
	return false;
}