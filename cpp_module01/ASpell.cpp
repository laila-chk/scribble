
#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::~ASpell(std::string nm, std::string effc): name(nm), effects(effc) {

}

std::string ASpell::getName() const {
	return name;
}

std::string ASpell::getEffects() const {
	return effects;
}

void ASpell::launch(const ATarget& trg) {
	trg.getHitBySpell(this);
}
