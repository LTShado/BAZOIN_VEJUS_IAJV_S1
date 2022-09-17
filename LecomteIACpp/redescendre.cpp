#include "redescendre.h"

using namespace std;

void Redescendre::Act() {
	cout << "REDESCENDRE " << endl;
	GameManager* gm = GameManager::getInstance();
	effetRepasserDebout tmp;
	tmp.activateEffect(gm->getManequin());
}
Redescendre::Redescendre() {

}