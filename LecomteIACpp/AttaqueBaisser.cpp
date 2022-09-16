#include "AttaqueBaisser.h"
using namespace std;

void AttaqueBaisser::Act(VieManequin* mannequin)  {
	cout << "ATTAQUE BAISSER" << endl;
	mannequin->VieJambes -= 6;
	if (mannequin->VieJambes <= 0)
		mannequin->VieJambes = 0;
	mannequin->printVie();
}

AttaqueBaisser::AttaqueBaisser() {

}