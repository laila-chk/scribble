#pragma once 

#include "ATarget.hpp"
#include "ASpell.hpp"

class Dummy :public ATarget {
	public:
		Dummy();
		~Dummy();
		Dummy* clone() const;
};
