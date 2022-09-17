#include "ReverseAstar.h"
#include "GameManager.h"
#include "Player.h"
#include "Action.h"



using namespace std;

//On initialise la liste OpenNode ainsi que la liste des preconditions non remplis pour le premier coups 
ReverseAstar::ReverseAstar() {
	GameManager* gm = GameManager::getInstance();
	Player p = gm->GetPlayer();

	AttaqueAerienne* attaqueaerienne = new AttaqueAerienne();
	AttaqueBaisser* attaquebaisser = new AttaqueBaisser();
	AttaquerDebout* attaqueDebout = new AttaquerDebout();

	GoapActions.push_back(attaqueaerienne);
	GoapActions.push_back(attaquebaisser);
	GoapActions.push_back(attaqueDebout);

	ATaper3Foix* ataper3foix = new ATaper3Foix();
	EtreAccroupi* etreaccroupi = new EtreAccroupi();
	EtreEnLair* etreenlair = new EtreEnLair();
	GoapPreconditions.push_back(ataper3foix);
	GoapPreconditions.push_back(etreaccroupi);
	GoapPreconditions.push_back(etreenlair);

}

void ReverseAstar::startSimu() {
	Action* coutleplusfaible = nullptr;
	int coutActuel = 0;
	GameManager* gm = GameManager::getInstance();
	effet* actualeffet = nullptr;
	vector<prerequis*> actualPrerequis;
	vector<Action*> listeActionsPossible;
	// on check chaque noeud seectioné 
	for (Action* noeud : GoapActions) {
		// on check noeud par noeud les actions et preconditions
		for (int i = 0; i < GoapActions.size(); i++) {
			coutleplusfaible = GoapActions[i];
			//si l'action a tout les prerequis de complet on l'ajoute a la liste des actions qui sera effectuer
			if (coutleplusfaible->Can() == true) {
				SimuActions.push_back(coutleplusfaible);
				if (coutleplusfaible->getEffect()->ValidateEffect(gm->getManequin())) {

					actualPrerequis = coutleplusfaible->GetRequirement();
					for (int i = 0; i < actualPrerequis.size(); i++) {
						GoapPreconditions.push_back(actualPrerequis[i]);
					}
				}
			}
		}
	}
	
}

