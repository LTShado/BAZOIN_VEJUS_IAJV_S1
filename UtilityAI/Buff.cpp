#include "Buff.hpp"

float Buff::getUtility(const Player me, const Player enemy) const{
	float res = (float(me.MP) / 30);
	float res2 = 0.0f;
	if (me.isBuffed) {
		res2 = 0.0f;
	}
	if (me.isDeBuffed) {
		res2 = 1.0f;
	}
	return (res + res2) / 2;
	
}