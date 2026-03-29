/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:02:39 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/21 18:15:22 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	Animal::operator=(other);
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Dog: Woof! Woof!" << std::endl;
}
