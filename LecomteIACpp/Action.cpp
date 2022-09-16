#include "Action.h"
#include "prerequis.h"
bool Action::Can() {
	bool state = true;
	for (prerequis* var : this->requirements){
		state = state && var->Require();
	}
	return state;
}

void Action::AddRequirements(prerequis* r) {
	this->requirements.push_back(r);
}

void Action::Act(VieManequin* manequin) {
	std::cout << "git gud" << std::endl;
}