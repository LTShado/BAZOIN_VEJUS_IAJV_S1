#include "EtreAccroupi.h"
#include "GameManager.h"
EtreAccroupi::EtreAccroupi() {

}
bool EtreAccroupi::Require() {
	GameManager* gm;
	state tmp = gm->getInstance()->getState();
	if (tmp == 3) {
		std::cout << "Etre Accroupi : Validée" << std::endl;
		return true;
	}
		
		std::cout << "Etre Accroupi : Refusé" << std::endl;
	return false;
}