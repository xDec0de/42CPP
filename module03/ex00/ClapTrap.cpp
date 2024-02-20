/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:47 by danimart          #+#    #+#             */
/*   Updated: 2024/02/20 12:44:27 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {
	std::cout << "Default consctuctor called" << std::endl;
	this->name = nullptr;
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const std::string &name) {
	std::cout << "Created a new ClapTrap named " << name << "." << std::endl;
	this->name = name;
	this->health = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy consctuctor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->damage = other.damage;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Desctuctor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->health == 0 || this->energy == 0)
		std::cout << "ClapTrap " << this->name << " can't attack right now." << std::endl;
	else {
		this->energy--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount == 0)
		std::cout << "ClapTrap " << this->name << " took zero damage, nothing changed." << std::endl;
	if (this->health == 0)
		std::cout << "ClapTrap " << this->name << " can't take any more damage." << std::endl;
	else if (amount < this->health) {
		this->health -= amount;
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage! (" << this->health << " remaining)" << std::endl;
	} else {
		this->health = 0;
		std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage! (Lethal)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health == 0 || this->energy == 0)
		std::cout << "ClapTrap " << this->name << " can't be repaired..." << std::endl;
	else if (amount == 0) {
		this->energy--;
		std::cout << "ClapTrap " << this->name << " tried to be repaired but didn't gain any health. [Energy: " << this->energy << "]" << std::endl;
	} else {
		this->health += amount;
		this->energy--;
		std::cout << "ClapTrap " << this->name << " has been repaired and gained " << amount << " health points! (" << this->health << " total)" << std::endl;
	}
}
