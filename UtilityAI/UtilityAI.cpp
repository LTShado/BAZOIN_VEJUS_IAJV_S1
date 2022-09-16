#include "GameManager.h"
#include "HeaderActions.hpp"
#include <vector>
#include <typeinfo>
#include "AttackEffect.hpp"

int main()
{
    GameManager init;
    init.Init();

    /*AI Robotchiotte;
    AttackEffect zboub;
    AttackRequirement bifleres(5);
    Attack* biffle= new Attack(bifleres, 1);
    std::vector<Action*> tested;
    tested.push_back(biffle);
    std::vector<Action*> temp;
    temp.insert(temp.begin(), tested.begin(), tested.end());
    tested.clear();
    std::cout << Robotchiotte.TestActions(temp).size()<<std::endl;
    //tested.resize(Robotchiotte.TestActions(temp).size());
    //tested.push_back(Robotchiotte.TestActions(temp)[0]);
    //tested.insert(tested.begin(), Robotchiotte.TestActions(temp).begin(), Robotchiotte.TestActions(temp).end());
    for (Action* act : Robotchiotte.TestActions(temp)) {
        tested.push_back(act);
    }

    std::cout << tested.size()<<std::endl;
    std::vector<float> utilities;
    for (int x = 0; x < tested.size(); x++) {
        std::cout << typeid(*tested[x]).name()<<std::endl;
        utilities.push_back(tested[x]->getUtility(Robotchiotte, Robotchiotte));
    }
    std::cout << utilities[0] << std::endl;*/
}

