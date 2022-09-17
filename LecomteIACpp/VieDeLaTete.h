#pragma once
#ifndef VIEDELATETE_H
#define VIEDELATETE_H


#include "prerequis.h"
class GameManager;
class VieDeLaTete : public prerequis
{
public:
	int id = 4;
	bool Require() override;
};

#endif // !VIEDELATETE_H