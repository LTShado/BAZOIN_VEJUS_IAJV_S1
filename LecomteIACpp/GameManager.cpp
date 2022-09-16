#include "GameManager.h"

GameManager::GameManager() {
	initAction();
}

void GameManager::initAction() {
	
	AttaqueAerienne* attaqueAerienne = new AttaqueAerienne();
	
	attaqueAerienne->AddRequirements(new EtreEnLair());
	attaqueAerienne->AddRequirements(new VieDeLaTete());
	this->IaGoat.AddAction(attaqueAerienne);

	AttaqueBaisser* attaqueBaisser = new AttaqueBaisser();			
	attaqueBaisser->AddRequirements(new EtreAccroupi());
	attaqueBaisser->AddRequirements(new VieDesJambes());
	this->IaGoat.AddAction(attaqueBaisser);

	AttaquerDebout* attaqueDebout = new AttaquerDebout();
	attaqueDebout->AddRequirements(new EtreDebout());
	attaqueDebout->AddRequirements(new VieDuTorse());
	this->IaGoat.AddAction(attaqueDebout);

	Baisser* seBaisser = new Baisser();
	seBaisser->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(seBaisser);

	Sauter* sauter = new Sauter();
	sauter->AddRequirements(new EtreDebout());
	this->IaGoat.AddAction(sauter);

	Relever* seRelever = new Relever();
	seRelever->AddRequirements(new EtreAccroupi());
	this->IaGoat.AddAction(seRelever);

	Redescendre* redescendre = new Redescendre();
	redescendre->AddRequirements(new EtreEnLair());
	this->IaGoat.AddAction(redescendre);

	CoupSpecial* coupSpecial = new CoupSpecial();
	coupSpecial->AddRequirements(new EtreDebout());
	coupSpecial->AddRequirements(new ATaper3Foix());
	coupSpecial->AddRequirements(new VieDuTorse());
	this->IaGoat.AddAction(coupSpecial);
}

Player GameManager::GetPlayer() const{
	return this->IaGoat;
}

void GameManager::SetPlayer(Player p) {
	this->IaGoat = p;
}