/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:27:19 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 12:10:43 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure(void): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
	std::cout << "Cure copy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

Cure::~Cure(void) {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone(void) const {
	return (new Cure(*this));
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
