#include "BaisserVieTorse.h"
#include "GameManager.h"

void BaisserVieTorse::activateEffect(VieManequin* mannequin) {
	mannequin->VieTorse -= 12;

}
BaisserVieTorse::BaisserVieTorse() {

}

bool BaisserVieTorse::ValidateEffect(VieManequin* mannequin) {
	
	if (mannequin->VieTorse >0) {
		return true;
	}
	else {
		return false;
	}
}