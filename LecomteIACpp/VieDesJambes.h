#pragma once
#ifndef VIEDESJAMBES_H
#define VIEDESJAMBES_H

#include "prerequis.h"

class GameManager;

class VieDesJambes : public prerequis
{
public :
	int id = 5;
	bool Require() override;
};

#endif // !VIEDESJAMBES_H