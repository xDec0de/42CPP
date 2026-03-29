/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:17:22 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 15:35:51 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal(void): type("unknown") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &t): type(t) {
	std::cout << "AAnimal constructor called with type " << t << "." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType(void) const {
	return (this->type);
}
