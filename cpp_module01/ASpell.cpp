#include "ATarget.hpp"
#include "ASpell.hpp"

ASpell::ASpell():name("u"), effects("x") {}

ASpell::ASpell(std::string nm, std::string effc): name(nm), effects(effc) {

}
ASpell::~ASpell() {}

std::string ASpell::getName() const {
	return name;
}

std::string ASpell::getEffects() const {
	return effects;
}

void ASpell::launch(const ATarget& trg) const {
	trg.getHitBySpell(*this);
}
