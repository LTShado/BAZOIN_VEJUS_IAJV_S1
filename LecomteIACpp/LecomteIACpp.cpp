// LecomteIACpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>
#include <random>
#include "GameManager.h"
#include "ReverseAstar.h"
using namespace std;

int main()
{
    int CounterTurn = 0;
    GameManager* gm = GameManager::getInstance();
    Player player = gm->GetPlayer();
    int nbAction = player.NbAction();
    ReverseAstar goap = ReverseAstar();
    
    


}
