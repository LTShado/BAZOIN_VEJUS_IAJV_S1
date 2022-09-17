#include "AttaqueBaisser.h"
#include "BaisserVieJambe.h"
#include "GameManager.h"
using namespace std;

void AttaqueBaisser::Act()  {
	cout << "ATTAQUE BAISSER" << endl;
	GameManager* gm = GameManager::getInstance();
	BaisserVieTete tmp;
	tmp.activateEffect(gm->getManequin());
	
}

AttaqueBaisser::AttaqueBaisser() {

}