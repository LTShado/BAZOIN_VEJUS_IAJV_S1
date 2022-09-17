#pragma once
#ifndef EFFETSACCROUPIR_H
#define EFFETSACCROUPIR_H

#include "effet.h"
#include "VieManequin.h"
#include "GameManager.h"

class EffetSaccroupir : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 5;
	EffetSaccroupir();
	bool ValidateEffect(VieManequin* mannequin) override;
};
#endif // !EFFETSACCROUPIR_H
