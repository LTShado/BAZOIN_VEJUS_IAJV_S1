#pragma once
#include "Player.h"

#include "EtreDebout.h"
#include "EtreAccroupi.h"
#include "EtreEnLair.h"
#include "ATaper3Foix.h"
#include "VieDeLaTete.h"
#include "VieDesJambes.h"
#include "VieDuTorse.h"



class GameManager
{
private : 
	Player IaGoat;

public :
	Player GetPlayer() const;
	void SetPlayer(Player p);
	void initAction();
	GameManager();
};

