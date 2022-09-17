#include "BaisserVieTete.h"
#include "GameManager.h"

void BaisserVieTete::activateEffect(VieManequin* mannequin){
	mannequin->VieTete -= 15;

}
BaisserVieTete::BaisserVieTete() {

}

bool BaisserVieTete::ValidateEffect(VieManequin* mannequin) {
	if (mannequin->VieTete > 0) {
		return true;
	}
	else {
		return false;
	}
}