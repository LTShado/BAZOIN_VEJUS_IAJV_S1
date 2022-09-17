#include "AttaqueAerienne.h"

using namespace std;

void AttaqueAerienne::Act ()
{
	
	cout << "ATTAQUE AERIENNE" << endl;
	GameManager* gm = GameManager::getInstance();
	BaisserVieTete tmp;
	tmp.activateEffect(gm->getManequin());
	
}

AttaqueAerienne::AttaqueAerienne() {

}