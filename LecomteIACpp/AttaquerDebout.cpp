#include "AttaquerDebout.h"
using namespace std;

void AttaquerDebout::Act(VieManequin* mannequin)  {
	cout << " ATTAQUER DEBOUT" << endl;
	mannequin->VieTorse -= 15;
	
	if (mannequin->VieTorse <= 0)
		mannequin->VieTorse = 0;
	mannequin->printVie();

}

AttaquerDebout::AttaquerDebout() {

}