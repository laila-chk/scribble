#pragma once

class ASpell {
	protected:
		std::string name;
		std::string effects;
		ASpell();
	public:
		~ASpell();
		ASpell(std::string name, std::string effects);
		std::string getName() const ;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget& trg)


}
