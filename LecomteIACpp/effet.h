#pragma once

#ifndef EFFET_H
#define EFFET_H

#include <string>

class VieManequin;
class GameManager;

class effet
{
public :
	effet();
	int id;
	virtual void activateEffect(VieManequin* mannequin) {};
	virtual bool ValidateEffect(VieManequin* mannequin) { return true; };
};


#endif // !EFFET_H