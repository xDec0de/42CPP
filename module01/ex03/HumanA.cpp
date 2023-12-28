/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:12:30 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 13:59:40 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << getWeapon().getType() << std::endl;
}

Weapon HumanA::getWeapon() {
	return this->weapon;
}
