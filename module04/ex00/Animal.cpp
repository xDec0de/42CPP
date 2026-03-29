/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:47:01 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/21 18:10:33 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): type("unknown") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &t): type(t) {
	std::cout << "Animal constructor called with type " << t << "." << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other) {
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Animal: *generic animal noise*" << std::endl;
}

std::string Animal::getType(void) const {
	return (this->type);
}
