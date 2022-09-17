#include "BaisserVieJambe.h"
#include "GameManager.h"

void BaisserVieJambe::activateEffect(VieManequin* mannequin) {
	mannequin->VieJambes -= 10;
}

BaisserVieJambe::BaisserVieJambe() {

}

bool BaisserVieJambe::ValidateEffect(VieManequin* mannequin)  {
	if (mannequin->VieJambes > 0) {
		return true;
	}
	else {
		return false;
	}
}