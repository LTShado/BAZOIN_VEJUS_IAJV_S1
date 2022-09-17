#pragma once
#ifndef ATTAQUEAERIENNE_H
#define ATTAQUEAERIENNE_H


#include "Action.h"

class AttaqueAerienne : public Action
{
private :
	 void Act() override ;

public:
	int cost = 4;
	AttaqueAerienne();

};

#endif // !ATTAQUEAERIENNE_H