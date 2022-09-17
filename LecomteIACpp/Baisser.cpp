#include "Baisser.h"
using namespace std;

void Baisser::Act()  {
	cout << "BAISSER" << endl;
	GameManager* gm = GameManager::getInstance();
	EffetSaccroupir tmp;
	tmp.activateEffect(gm->getManequin());
}

Baisser::Baisser() {

}