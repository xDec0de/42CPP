/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:21 by danimart          #+#    #+#             */
/*   Updated: 2025/08/15 17:58:21 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "Default FragTrap consctuctor called" << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name) {
	std::cout << "Created a new FragTrap named " << name << "." << std::endl;
	this->health = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other) {
	std::cout << "FragTrap copy assignement operator called (" << name << " = " << other.name << ")" << std::endl;
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap desctuctor called for " << name << std::endl;
}

std::ostream &FragTrap::prefix(void) {
	if (this->health == 0)
		std::cout << "💀";
	else
		std::cout << this->health << "♥";
	std::cout << " " << this->energy << "⚡➤ FragTrap " << name << " ";
	return std::cout;
}

void FragTrap::highFivesGuys(void) {
	if (this->health == 0)
		prefix() << "isn't operative, so it can't ask for a high five :(" << std::endl;
	else
		prefix() << "is asking for a high five!" << std::endl;
}
