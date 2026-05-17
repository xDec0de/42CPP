/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 12:18:27 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 15:10:55 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character(void): name("unknown") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string &n): name(n) {
	std::cout << "Character constructor called with name " << n << "." << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &other): name(other.name) {
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = other;
}

Character &Character::operator=(const Character &other) {
	std::cout << "Character copy assignment operator called" << std::endl;
	this->name = other.name;
	for (int i = 0; i < 4; i++) {
		delete this->inventory[i];
		if (other.inventory[i])
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	return *this;
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

std::string const &Character::getName(void) const {
	return (this->name);
}

void Character::equip(AMateria *m) {
	if (!m)
		return;
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
		return;
	this->inventory[idx]->use(target);
}
