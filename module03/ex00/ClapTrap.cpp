/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:47 by danimart          #+#    #+#             */
/*   Updated: 2024/02/19 18:52:25 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) {
	std::cout << "Default consctuctor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy consctuctor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Copy assignement operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Desctuctor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	
}

void ClapTrap::takeDamage(unsigned int amount) {
	
}

void ClapTrap::beRepaired(unsigned int amount) {
	
}
