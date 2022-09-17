#include "relever.h"
#include "GameManager.h"
#include "effetRepasserDebout.h"

using namespace std;

void Relever::Act() {
	cout << "SE RELEVE " << endl;
	GameManager* gm = GameManager::getInstance();
	effetRepasserDebout tmp;
	tmp.activateEffect(gm->getManequin());
}

Relever::Relever() {

}