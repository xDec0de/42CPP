/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:47 by danimart          #+#    #+#             */
/*   Updated: 2024/03/04 20:30:41 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): name("unknown"), health(10), energy(10), damage(0) {
	std::cout << "Default ClapTrap consctuctor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name): name(name), health(10), energy(10), damage(0) {
	std::cout << "Created a new ClapTrap named " << name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "ClapTrap copy consctuctor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap copy assignement operator called (" << name << " = " << other.name << ")" << std::endl;
	this->name = other.name;
	this->health = other.health;
	this->energy = other.energy;
	this->damage = other.damage;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap desctuctor called for " << name << std::endl;
}

void print(const std::string &name, int health, int energy, const std::string &msg) {
	std::string health_str = health == 0 ? "💀" : std::to_string(health) + "♥"; 
	std::cout << health_str << " " << std::to_string(energy) << "⚡➤ " << name << " " << msg << std::endl;
}

std::string namePoints(int amount) {
	return std::to_string(amount) + (amount == 1 ? " point" : " points");
}

std::string namePoints(const std::string &prefix, int amount) {
	return std::to_string(amount) + " " + prefix + (amount == 1 ? " point" : " points");
}

void ClapTrap::attack(const std::string &target) {
	if (this->health == 0 || this->energy == 0)
		print(this->name, this->health, this->energy, "can't attack right now.");
	else {
		this->energy--;
		print(this->name, this->health, this->energy, "attacks " + target + " causing " + namePoints(this->damage) + " of damage!");
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (amount == 0)
		print(this->name, this->health, this->energy, "took zero damage, nothing changed.");
	else if (this->health == 0)
		print(this->name, this->health, this->energy, "can't take any more damage.");
	else if (amount < this->health) {
		this->health -= amount;
		print(this->name, this->health, this->energy, "took " + namePoints(amount) + " of damage!");
	} else {
		this->health = 0;
		print(this->name, this->health, this->energy, "took " + namePoints(amount) + " of lethal damage!");
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->health == 0 || this->energy == 0)
		print(this->name, this->health, this->energy, "can't be repaired...");
	else if (amount == 0) {
		this->energy--;
		print(this->name, this->health, this->energy, "was repaired but didn't gain any health.");
	} else {
		this->health += amount;
		this->energy--;
		print(this->name, this->health, this->energy, "has been repaired and gained " + namePoints("health", amount));
	}
}
