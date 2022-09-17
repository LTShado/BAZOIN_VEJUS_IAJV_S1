#include "GameManager.h"

//Include d'actions 
#include "AttaqueAerienne.h"
#include "AttaqueBaisser.h"
#include "AttaquerDebout.h"
#include "Baisser.h"
#include "coupSpecial.h"
#include "redescendre.h"
#include "relever.h"
#include "Sauter.h"

//include d'effet
#include "BaisserVieJambe.h"
#include "BaisserVieTete.h"
#include "BaisserVieTorse.h"
#include "EffetMonter.h"
#include "effetRepasserDebout.h"
#include "EffetSaccroupir.h"

//include de prerequis
#include "ATaper3Foix.h"
#include "EtreAccroupi.h"
#include "EtreDebout.h"
#include "EtreEnLair.h"
#include "VieDeLaTete.h"
#include "VieDesJambes.h"
#include "VieDuTorse.h"


GameManager* GameManager::instance = 0;

GameManager::GameManager() {
	initAction();
	gamestate = state::Debout;
}

GameManager* GameManager::getInstance() {
	if (instance == nullptr) {
		instance = new GameManager();
	}
	return instance;
}

void GameManager::initAction() {
	//init des effets 
	BaisserVieJambe* baisserviejambe = new BaisserVieJambe();
	BaisserVieTete* baisservietete = new BaisserVieTete();
	BaisserVieTorse* baisservietorse = new BaisserVieTorse();
	EffetMonter* effetMonter = new EffetMonter();
	effetRepasserDebout* effetrepasserdebout = new effetRepasserDebout();
	EffetSaccroupir* effetsaccroupir = new EffetSaccroupir();


	//init des actions avec les prerequis

	AttaqueAerienne* attaqueAerienne = new AttaqueAerienne();
	
	attaqueAerienne->AddRequirements(new EtreEnLair());
	attaqueAerienne->AddRequirements(new VieDeLaTete());
	attaqueAerienne->AddEffect(baisservietete);

	this->IaGoat.AddAction(attaqueAerienne);

	AttaqueBaisser* attaqueBaisser = new AttaqueBaisser();			
	attaqueBaisser->AddRequirements(new EtreAccroupi());
	attaqueBaisser->AddRequirements(new VieDesJambes());
	attaqueBaisser->AddEffect(baisserviejambe);
	this->IaGoat.AddAction(attaqueBaisser);

	AttaquerDebout* attaqueDebout = new AttaquerDebout();
	attaqueDebout->AddRequirements(new EtreDebout());
	attaqueDebout->AddRequirements(new VieDuTorse());
	attaqueDebout->AddEffect(baisservietorse);
	this->IaGoat.AddAction(attaqueDebout);

	Baisser* seBaisser = new Baisser();
	seBaisser->AddRequirements(new EtreDebout());
	seBaisser->AddEffect(effetsaccroupir);
	this->IaGoat.AddAction(seBaisser);

	Sauter* sauter = new Sauter();
	sauter->AddRequirements(new EtreDebout());
	sauter->AddEffect(effetMonter);
	this->IaGoat.AddAction(sauter);

	Relever* seRelever = new Relever();
	seRelever->AddRequirements(new EtreAccroupi());
	seRelever->AddEffect(effetrepasserdebout);
	this->IaGoat.AddAction(seRelever);

	Redescendre* redescendre = new Redescendre();
	redescendre->AddRequirements(new EtreEnLair());
	redescendre->AddEffect(effetrepasserdebout);
	this->IaGoat.AddAction(redescendre);

	CoupSpecial* coupSpecial = new CoupSpecial();
	coupSpecial->AddRequirements(new EtreDebout());
	coupSpecial->AddRequirements(new ATaper3Foix());
	coupSpecial->AddRequirements(new VieDuTorse());
	coupSpecial->AddEffect(baisservietorse);
	this->IaGoat.AddAction(coupSpecial);

}

Player GameManager::GetPlayer() const{
	return this->IaGoat;
}

void GameManager::SetPlayer(Player p) {
	this->IaGoat = p;
}

state GameManager::getState() const{
	return this->gamestate;
}

void GameManager::setState(state s) {
	this->gamestate = s;
}

VieManequin* GameManager::getManequin() const {
	return this->manequin;
}

int GameManager::GetnbCoup() const {
	return nbCoup;
}

void GameManager::SetnbCoup(int p) {
	this->nbCoup += p;
}

