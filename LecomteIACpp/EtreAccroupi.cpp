#include "EtreAccroupi.h"
#include "GameManager.h"
EtreAccroupi::EtreAccroupi() {

}
bool EtreAccroupi::Require() {
	GameManager* gm;
	state tmp = gm->getInstance()->getState();
	if (tmp == 3) {
		std::cout << "Etre Accroupi : Valid�e" << std::endl;
		return true;
	}
		
		std::cout << "Etre Accroupi : Refus�" << std::endl;
	return false;
}