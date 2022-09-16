#include "AttackSpe.hpp"

float AttackSpe::getUtility(const Player me, const Player enemy) const{
	std::cout << "Attack Utility";
	std::cout << "mestr: " << me.str << " enemyhp: " << enemy.HP << std::endl;
	float res = float(me.str) / float(enemy.HP);
	if (me.isDeBuffed == true) { res -= 0.1; }
	if (enemy.isDefending == true) { res -= 0.1; }
	float res2 = float(me.MP) / 30.0f;
	return (res + res2) / 2;
}