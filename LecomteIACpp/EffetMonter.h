#pragma once
#ifndef EFFETMONTER_H
#define EFFETMONTER_H
#include "effet.h"
#include "VieManequin.h"
#include "GameManager.h"
class EffetMonter : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 3;
	EffetMonter();
	bool ValidateEffect(VieManequin* mannequin) override;
};

#endif // !EFFETMONTER_H