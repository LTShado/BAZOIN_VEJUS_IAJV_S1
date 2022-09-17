#pragma once

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "VieManequin.h"
#include "Player.h"
#include "ReverseAstar.h"
//class action
class AttaqueAerienne;
class AttaqueBaisser;
class AttaquerDebout;
class Baisser;
class coupSpecial;
class redescendre;
class relever;
class Sauter;
//class effet
class BaisserVieJambe;
class BaisserVieTete;
class BaisserVieTorse;
class EffetMonter;
class effetRepasserDebout;
class EffetSaccroupir;
//class prerequis
class ATaper3Foix;
class EtreAccroupi;
class EtreDebout;
class EtreEnLair;
class VieDeLaTete;
class VieDesJambes;
class VieDuTorse;


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