#include "coupSpecial.h"
#include "GameManager.h"
#include "BaisserVieTorse.h"

using namespace std;

void CoupSpecial::Act() {
	cout << "COUP SPECIAL " << endl;
	GameManager* gm = GameManager::getInstance();
	BaisserVieTorse tmp;
	tmp.activateEffect(gm->getManequin());
}

CoupSpecial::CoupSpecial() {

}