/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:24:53 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/15 17:12:58 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void): ClapTrap("unknown_clap_name"), ScavTrap(), FragTrap(), name("unknown") {
	std::cout << "Default DiamondTrap consctuctor called" << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 30;
}

DiamondTrap::DiamondTrap(const std::string &name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
	std::cout << "Created a new DiamondTrap named " << name << "." << std::endl;
	this->health = 100;
	this->energy = 50;
	this->damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other):
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	name(other.name) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap copy assignement operator called (" << name << " = " << other.name << ")" << std::endl;
	ScavTrap::operator=(other);
	this->name = other.name;
	return *this;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap desctuctor called for " << name << std::endl;
}

std::ostream &DiamondTrap::prefix(void) {
	if (this->health == 0)
		std::cout << "💀";
	else
		std::cout << this->health << "♥";
	std::cout << " " << this->energy << "⚡➤ DiamondTrap " << name << " ";
	return std::cout;
}

void DiamondTrap::whoAmI(void) {
	prefix() << "is also known as ClapTrap " << ClapTrap::name << "." << std::endl;
}
