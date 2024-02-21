/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:21 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 21:09:33 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "Default ScavTrap consctuctor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name) {
	std::cout << "Created a new ScavTrap named " << name << "." << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other) {
	std::cout << "ScavTrap copy assignement operator called (" << name << " = " << other.name << ")" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap desctuctor called for " << name << std::endl;
}

void ScavTrap::guardGate(void) {
	if (this->health == 0)
		std::cout << "💀 ➤ " << this->name << " isn't operative, so it can't guard the gate.";
	else
		std::cout << this->health << "♥ ➤ " << this->name << " is now guarding the gate!" << std::endl;
}
