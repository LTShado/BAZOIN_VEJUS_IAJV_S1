#include "coupSpecial.h"
using namespace std;

void CoupSpecial::Act(VieManequin* mannequin) {
	cout << "COUP SPECIAL " << endl;
	mannequin->VieTorse -= 25;
	mannequin->printVie();
}

CoupSpecial::CoupSpecial() {

}