#pragma once
#ifndef BAISSERVIETORSE_H
#define BAISSERVIETORSE_H
#include "effet.h"
#include "GameManager.h"
class BaisserVieTorse : public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 2;
	BaisserVieTorse();
	bool ValidateEffect(VieManequin* mannequin) override;
};

#endif // !BAISSERVIETORSE_H