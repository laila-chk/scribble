#pragma once 

#include <string>
#include "ASpell.hpp"


class ATarget {
	protected:
		std::string type;
	public:
		ATarget();
		ATarget(std::string type);
		virtual ~ATarget();
		const std::string& getType() const;
		virtual ATarget* clone() const = 0;

		void getHitBySpell(const class ASpell& spl) const;
};
