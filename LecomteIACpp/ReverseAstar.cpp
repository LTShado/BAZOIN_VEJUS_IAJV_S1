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






effet* ReverseAstar::checkPrecondition(prerequis* p) {
	switch (p->id)
	{
		//si precondition = Atapper3foix on renvoie l'effet baisser vie torse
	case 0:
		BaisserVieTorse * bvt = new BaisserVieTorse();
		return bvt;
		break;
		//si precondition = etreaccroupi on renvoie l'effet s'accroupir
	case 1:
		EffetSaccroupir * es = new EffetSaccroupir();
		return es;
		break;
		//si precondition = etreDebout on renvoie l'effet repasserDebout
	case 2:
		effetRepasserDebout * erd = new effetRepasserDebout();
		return erd;
		break;
		//si precondition = etre en l'air on renvoie l'effet monter
	case 3:
		EffetMonter * em = new EffetMonter();
		return em;
		break;
		//si precondition = vie de la tete on renvoie l'effet basser vie tete
	case 4:
		BaisserVieTete * baisservietete = new BaisserVieTete();
		return baisservietete;
		break;
		//si precondition = vie des jambes on renvoie l'effet basser vie jambes
	case 5:
		BaisserVieJambe * baisserviejambe = new BaisserVieJambe();
		return baisserviejambe;
		break;
		//si precondition = vie du torse on renvoie l'effet basser vie torse
	case 6:
		BaisserVieTorse * baisservietorse = new BaisserVieTorse();
		return baisservietorse;
		break;


	default:
		cout << "erreur Check precondition" << endl;
		break;
	}
}