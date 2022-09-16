#include <iostream>
using namespace std;
#include <random>
#include <time.h>

#include "WhoStart.h"

int WhoStart::WhoStartRandomiser()
{
	int PlayerChoice;
	int randomN = 0;
	cout << "Choose a peer number or odd number : ";
	cin >> PlayerChoice;
	cout << "Your number was " << PlayerChoice << "\n";
	srand(time(NULL));
	randomN = rand() % 2 + 1;

	if (randomN % 2 == 0) {
		cout << "And it was peer \n";
		if (PlayerChoice % 2 == 0) {
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		cout << "And it was odd \n";
		if (PlayerChoice % 2 == 1) {
			return 1;
		}
		else{
			return 0;
		}
	}
}