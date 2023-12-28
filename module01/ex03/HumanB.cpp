/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:40:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 15:07:24 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name) {
	this->weapon = NULL;
}

void HumanB::attack() {
	if (getWeapon() != NULL)
		std::cout << this->name << " attacks with their " << getWeapon()->getType() << std::endl;
	else
		std::cout << this->name << " attacks with their bare hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

Weapon *HumanB::getWeapon() {
	return this->weapon;
}
