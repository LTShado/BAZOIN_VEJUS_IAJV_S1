#pragma once
#ifndef ETREACCROUPI_H
#define ETREACCROUPI_H

#include "prerequis.h"

class GameManager;

class EtreAccroupi: public prerequis
{
public:
	EtreAccroupi();
	int id = 1;
	bool Require() override;
};

#endif // !ETREACCROUPI_H