#pragma once

#ifndef EFFET_H
#define EFFET_H

#include "GameManager.h"
#include"VieManequin.h"
class effet
{
public :
	effet();
	int id;
	effet(std::string);
	virtual void activateEffect(VieManequin* mannequin);
	virtual bool ValidateEffect(VieManequin* mannequin) ;
};


#endif // !EFFET_H