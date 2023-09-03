/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:40:23 by lchokri           #+#    #+#             */
/*   Updated: 2023/09/03 14:47:37 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) :name(name), title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << name <<": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const
{
	return name;
}

const std::string& Warlock::getTitle() const {
	return title;
}

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title + "!" << std::endl;
}

void Warlock::setTitle(const std::string& title) {
	this->title = title;
}

void Warlock::learnSpell(ASpell* sp) {
	this->spells[sp->name] = sp->effects;
}

void Warlock::forgetSpell(std::string spellname){
	this->spells.erase(spellname);
}

void Warlock::launchSpell(std::string spellname, ATarget& trg) {
	
}
