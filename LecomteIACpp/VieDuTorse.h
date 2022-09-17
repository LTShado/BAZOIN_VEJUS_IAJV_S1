#pragma once
#ifndef VIEDUTORSE_H
#define VIEDUTORSE_H

#include "prerequis.h"
class GameManager;

class VieDuTorse : public prerequis
{
public :
	int id = 6;
	bool Require() override;
};

#endif // !VIEDUTORSE_H