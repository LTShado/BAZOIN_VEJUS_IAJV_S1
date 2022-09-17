#include "ATaper3Foix.h"
#include "GameManager.h"

bool ATaper3Foix::Require()  {
	GameManager* gm = GameManager::getInstance();
	int tmp = gm->GetnbCoup();

	if (tmp == 3) {
		std::cout << "Coup Special Débloquer " << std::endl;
		return true;
	}
	std::cout << "Coup Special : Refusé" << std::endl;
	return false;
}