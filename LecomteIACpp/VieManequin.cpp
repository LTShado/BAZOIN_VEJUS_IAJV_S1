#include "VieManequin.h"
#include <iostream>
VieManequin::VieManequin() {

	int randTete = 0;
	int randTorse = 0;
	int randJambe = 0;

	randTete = rand() % 30 + 1;
	randTorse = rand() % 40 + 1;
	randJambe = rand() % 25 + 1;

	this->VieTete = randTete;
	this->VieTorse = randTorse;
	this->VieJambes = randJambe;

}

void VieManequin::printVie() {
	std::cout << "Vie de Tete actuel : " << this->VieTete << std::endl;
	std::cout << "Vie du Torse actuel : " << this->VieTorse << std::endl;
	std::cout << "Vie des jambes actuel : " << this->VieJambes << std::endl;
	std::cout << std::endl;
}