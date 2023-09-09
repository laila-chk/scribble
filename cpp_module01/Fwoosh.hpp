#pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"

class Fwoosh : public ASpell {
	protected:
	public:
		Fwoosh();	
		~Fwoosh();	
		Fwoosh* clone() const;
};
