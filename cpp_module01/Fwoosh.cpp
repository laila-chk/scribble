#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : name("Fwoosh"), effect("fwooshed") {
}

ASpell* Fwoosh::clone() const {
	return new Fwoosh();
}
