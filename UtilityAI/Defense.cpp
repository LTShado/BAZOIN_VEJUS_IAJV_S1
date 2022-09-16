#include "Defense.hpp"

float Defense::getUtility(const Player me, const Player enemy, const float platt) const {
	float res = (1.0f - float(me.HP)) / 100;
	res = (res + platt) / 2;
	if (enemy.isBuffed) { res += 0.1f; }
	return res;
}