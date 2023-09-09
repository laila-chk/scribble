/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:04:33 by lchokri           #+#    #+#             */
/*   Updated: 2023/09/06 11:27:56 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ATarget.hpp"

ATarget::ATarget() :type("") {}

ATarget::ATarget(std::string tp) : type(tp) {
}

ATarget::~ATarget() {}

const std::string& ATarget::getType() const {
	return type;
}

void ATarget::getHitBySpell(const ASpell& spell) const{
	std::cout << this->type << " has been " << spell.getEffects() + "!" << std::endl;
}
