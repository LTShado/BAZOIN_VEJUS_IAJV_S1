#include "AttaqueBaisser.h"
#include "GameManager.h"
#include "BaisserVieJambe.h"

using namespace std;

void AttaqueBaisser::Act()  {
	cout << "ATTAQUE BAISSER" << endl;
	GameManager* gm = GameManager::getInstance();
	BaisserVieJambe tmp;
	tmp.activateEffect(gm->getManequin());
	
}

AttaqueBaisser::AttaqueBaisser() {

}