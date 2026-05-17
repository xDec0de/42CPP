/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:28:44 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 11:40:22 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &t): type(t) {
	std::cout << "AMateria constructor called with type " << t << "." << std::endl;
}

AMateria::AMateria(const AMateria &other): type(other.type) {
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	std::cout << "AMateria copy assignment operator called" << std::endl;
	(void)other;
	return *this;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void) const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
