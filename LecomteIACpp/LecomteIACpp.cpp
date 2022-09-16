// LecomteIACpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <random>
#include "GameManager.h"
#include "VieManequin.h"

using namespace std;

int main()
{
    int CounterTurn = 0;
    GameManager gm;
    VieManequin manequin;
    Player player = gm.GetPlayer();
    int nbAction = player.NbAction();

    while (CounterTurn <10) {
        
        int randomAttaque = rand() % 7; 
        
        player.currentAction = player.getAction(randomAttaque);

        player.currentAction->Act(&manequin);
        
        
        CounterTurn++;
    }
}
