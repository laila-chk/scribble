#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>

class ASpell {
	protected:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		std::string getName() const ;
		std::string getEffects() const;
		virtual ASpell* clone() const  = 0;
		void launch(const class ATarget& trg) const;
};
