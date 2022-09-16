#include "AttaqueAerienne.h"
using namespace std;

void AttaqueAerienne::Act (VieManequin* mannequin)
{
	cout << "ATTAQUE AERIENNE" << endl;
	mannequin->VieTete -= 10;
	if (mannequin->VieTete <= 0)
		mannequin->VieTete = 0;
	mannequin->printVie();
	
}

AttaqueAerienne::AttaqueAerienne() {

}