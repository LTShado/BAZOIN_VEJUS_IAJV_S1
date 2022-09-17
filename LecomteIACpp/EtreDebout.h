#pragma once
#ifndef ETREDEBOUT_H
#define ETREDEBOUT_H

#include "prerequis.h"
class GameManager;

class EtreDebout : public prerequis
{
public :
	int id = 2;
	bool Require() override;
};

#endif // !ETREDEBOUT_H