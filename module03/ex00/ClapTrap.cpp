/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:47 by danimart          #+#    #+#             */
/*   Updated: 2025/08/15 17:31:02 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): name("unknown"), health(10), energy(10), damage(0) {
	std::cout << "Default consctuctor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), health(10), energy(10), damage(0) {
	std::cout << "Created a new ClapTrap named " << name << "." << std::endl;
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

std::ostream &ClapTrap::prefix(void) {
	if (this->health == 0)
		std::cout << "💀";
	else
		std::cout << this->health << "♥";
	std::cout << " " << this->energy << "⚡➤ ClapTrap " << name << " ";
	return std::cout;
}

std::ostream &printPoints(int amount) {
	std::cout << amount << (amount == 1 ? " point" : " points");
	return std::cout;
}

void addPoints(const std::string &prefix, int amount) {
	std::cout << " " << prefix << (amount == 1 ? " point" : " points");
}

void ClapTrap::attack(const std::string &target) {
	if (this->health == 0 || this->energy == 0)
		prefix() << "can't attack right now." << std::endl;
	else {
		this->energy--;
		prefix() << "attacks " << target << " causing ";
		printPoints(this->damage) << " of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount == 0)
		prefix() << "took zero damage, nothing changed." << std::endl;
	else if (this->health == 0)
		prefix() << "can't take any more damage." << std::endl;
	else if (amount < this->health) {
		this->health -= amount;
		prefix() << "took ";
		printPoints(amount) << " of damage!" << std::endl;
	} else {
		this->health = 0;
		prefix() << "took ";
		printPoints(amount) << " of lethal damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health == 0 || this->energy == 0)
		prefix() << "can't be repaired..." << std::endl;
	else if (amount == 0) {
		this->energy--;
		prefix() << "was repaired but didn't gain any health." << std::endl;
	} else {
		this->health += amount;
		this->energy--;
		prefix() << "has been repaired and gained ";
		printPoints(amount) << " of health" << std::endl;
	}
}
