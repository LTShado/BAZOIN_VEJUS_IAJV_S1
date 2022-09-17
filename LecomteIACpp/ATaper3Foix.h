#pragma once
#ifndef ATAPER3FOIX_H
#define ATAPER3FOIX_H

#include "prerequis.h"

class GameManager;

class ATaper3Foix : public prerequis
{
public :
	int id = 0;
	bool Require() override;
};

#endif // !ATAPER3FOIX_H