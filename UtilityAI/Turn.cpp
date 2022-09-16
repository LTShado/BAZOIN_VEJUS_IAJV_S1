#include <iostream>
using namespace std;
#include "Turn.h"
#include "GameManager.h"

void Turn::PlayerTurn(int t) {
	int action;
	GameManager gm;
	Player* player = new Player;
	AI* playerAI = new AI;

	while (player->HP > 0 && playerAI->HP) {
		if (t == 1) {
			if (counterTurn % 2 == 1) {
				cout << "Your turn : " << "\n";
				cout << "1 -> Attack" << "\n";
				cout << "2 -> AttackSpe" << "\n";
				cout << "3 -> Buff" << "\n";
				cout << "4 -> Debuff" << "\n";
				cout << "5 -> Defense" << "\n";
				cin >> action;
				gm.fight.FightAgainst(player, playerAI, action);
				cout << player->HP << "\n";
				cout << playerAI->HP << "\n";
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> action;
				gm.fight.FightAgainst(playerAI, player, action);
				cout << player->HP << "\n";
				cout << playerAI->HP << "\n";
				counterTurn++;
			}
		}
		else {
			if (counterTurn % 2 == 0) {
				cout << "Your turn : " << "\n";
				cout << "1 -> Attack" << "\n";
				cout << "2 -> AttackSpe" << "\n";
				cout << "3 -> Buff" << "\n";
				cout << "4 -> Debuff" << "\n";
				cout << "5 -> Defense" << "\n";
				cin >> action;
				gm.fight.FightAgainst(player, playerAI, action);
				cout << player->HP << "\n";
				cout << playerAI->HP << "\n";
				counterTurn++;
			}
			else {
				cout << "Wait for your oppenent : " << "\n";
				cin >> action;
				gm.fight.FightAgainst(playerAI, player, action);
				cout << player->HP << "\n";
				cout << playerAI->HP << "\n";
				counterTurn++;
			}
		}
	}
}