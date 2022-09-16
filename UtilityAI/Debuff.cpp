#include "Debuff.hpp"

float Debuff::getUtility(const Player me, const Player enemy, const float platt) const{
	float res = (float(me.MP) / 30);
	if (enemy.isBuffed) {
		return ((res + platt) / 2 )+0.2f;
	}
	else {
		return ((res + platt) / 2)-0.2f;
	}
}