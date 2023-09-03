#pragma once

#include "ASpell.hpp"
#include <iostream>

class Warlock {

	private:
		Warlock();
		std::string name;
		std::string title;
		std::map<std::string name, std::string efc> spells;

	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		const std::string& getName() const;
		const std::string& getTitle() const;
		void introduce() const;
		void setTitle(const std::string& title);

		void learnSpell(ASpell* sp);
		void forgetSpell(std::string spellname);
		void launchSpell(std::string spellname, ATarget& trg);
};
