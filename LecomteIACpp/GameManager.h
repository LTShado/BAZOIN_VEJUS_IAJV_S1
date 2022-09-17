#pragma once

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Player.h"
#include "EtreDebout.h"
#include "EtreAccroupi.h"
#include "EtreEnLair.h"
#include "ATaper3Foix.h"
#include "VieDeLaTete.h"
#include "VieDesJambes.h"
#include "VieDuTorse.h"
#include "EffetMonter.h"
#include "effetRepasserDebout.h"
#include "EffetSaccroupir.h"
#include "BaisserVieJambe.h"
#include "BaisserVieTete.h"
#include "BaisserVieTorse.h"



// POSITION DU JOUEUR
enum state {
	Enlair = 1,
	Debout = 2,
	Accroupi = 3
};

class GameManager
{
private : 
	
	static GameManager* instance;
	Player IaGoat;
	VieManequin* manequin;
	GameManager() ;
	int nbCoup = 0;
	state gamestate;

public :

	static GameManager* getInstance();
	Player GetPlayer() const;
	void SetPlayer(Player p);
	int GetnbCoup() const;
	void SetnbCoup(int p);
	state getState()const;
	void setState(state);
	VieManequin* getManequin() const;
	
	void initAction();

};



#endif // GAMEMANAGER_H