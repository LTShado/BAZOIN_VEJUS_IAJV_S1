#pragma once
#ifndef BAISSERVIEJAMBE_H
#define BAISSERVIEJAMBE_H
#include "effet.h"
#include "GameManager.h"
class BaisserVieJambe: public effet
{
public :
	void activateEffect(VieManequin* mannequin) override;
	int id = 0;
	BaisserVieJambe();
	bool ValidateEffect(VieManequin* mannequin) override;
};
#endif // !BAISSERVIEJAMBE_H