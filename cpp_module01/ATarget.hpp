#pragma once 
#include "ASpell.hpp"

class ATarget {
	protected:
		ATarget();
		std::string type;
	public:
		ATarget(std::string type);
		~ATarget();
		const std::string& getType() const;
		virtual ATarget* clone() const = 0;

		void getHitBySpell(const ASpell& spl);
}
