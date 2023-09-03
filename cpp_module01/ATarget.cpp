
#include "ATarget.hpp"

ATarget::ATarget(std::string tp) : type(tp) {
}

const std::string& ATarget::getType() const {
	return type;
}

void ATarget::getHitBySpell(const ASpell& spell) {
	std::cout << this->type << " has been " << spell.getEffects() + "!" << std::endl;
}
