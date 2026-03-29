/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:30:03 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 15:55:27 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): AAnimal("Dog"), brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): AAnimal(other), brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	AAnimal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return *this;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound(void) const {
	std::cout << "Dog: Woof! Woof!" << std::endl;
}

Brain *Dog::getBrain(void) const {
	return (this->brain);
}
