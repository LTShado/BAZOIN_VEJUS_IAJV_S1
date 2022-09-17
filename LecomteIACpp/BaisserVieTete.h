#pragma once
#ifndef EFFETBAISSERTETE_H
#define EFFETBAISSERTETE_H

#include "effet.h"

class GameManager;

class BaisserVieTete : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 1;
	BaisserVieTete();
	bool ValidateEffect(VieManequin* mannequin) override;
};

#endif // !EFFETBAISSERTETE_H