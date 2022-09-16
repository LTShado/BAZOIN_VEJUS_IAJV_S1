#include "Baisser.h"
using namespace std;

void Baisser::Act(VieManequin* mannequin)  {
	cout << "BAISSER" << endl;
	mannequin->printVie();
}

Baisser::Baisser() {

}