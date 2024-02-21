/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:21 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 21:29:54 by danimart         ###   ########.fr       */
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

void FragTrap::highFivesGuys(void) {
	if (this->health == 0)
		std::cout << "💀 ➤ " << this->name << " isn't operative, so it can't high five." << std::endl;
	else
		std::cout << this->health << "♥ ➤ " << this->name << " high fives to everyone!" << std::endl;
}
