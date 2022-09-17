#pragma once
#ifndef EFFETREPASSERDEBOUT_H
#define EFFETREPASSERDEBOUT_H

#include "effet.h"

class GameManager;

class effetRepasserDebout : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 4;
	effetRepasserDebout();
	bool ValidateEffect(VieManequin* mannequin) override;
};

#endif // !EFFETREPASSERDEBOUT_H
