/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:21 by danimart          #+#    #+#             */
/*   Updated: 2024/02/20 15:27:38 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) {
	std::cout << "Default ScavTrap consctuctor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout << "Created a new ClapTrap named " << name << "." << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " is now guarding the gate!" << std::endl;
}
