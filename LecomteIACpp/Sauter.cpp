#include "Sauter.h"
#include "GameManager.h"
#include "EffetMonter.h"

using namespace std;

 void Sauter::Act() {
	 cout << "SAUTE " << endl;
	 GameManager* gm = GameManager::getInstance();
	 EffetMonter tmp;
	 tmp.activateEffect(gm->getManequin());
}
 Sauter::Sauter() {

 }