#pragma once

#include <iostream>

class Warlock {

	private:
		Warlock();
		std::string name;
		std::string title;

	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		const std::string& getName() const;
		const std::string& getTitle() const;
		void introduce() const;
		void setTitle(const std::string& title);
};
