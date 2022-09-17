#include "Action.h"
#include "prerequis.h"

bool Action::Can() {
	bool state = true;
	for (prerequis* var : this->requirements){
		state = state && var->Require();
	}
	if (state == true) {
		std::cout << "Peut jouer" << std::endl;
	}
	else {
		std::cout << "Peut pas jouer" << std::endl;
	}
	
	return state;
}

void Action::AddRequirements(prerequis* r) {
	this->requirements.push_back(r);
}

void Action::Act() {}

void Action::AddEffect(effet* e) {
	this->effects.push_back(e);
}

effet* Action::getEffect() {
	return effects[0];
}

std::vector<prerequis*> Action::GetRequirement() {
	
	return this->requirements;
}