#pragma once
#ifndef ETREENLAIR_H
#define ETREENLAIR_H

#include "prerequis.h"
class GameManager;

class EtreEnLair : public prerequis
{
public :
	int id = 3;
	bool Require() override;
};

#endif // ETREENLAIR_H