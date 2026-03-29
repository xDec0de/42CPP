/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:47:19 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 12:35:47 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal("Dog"), brain(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other), brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << "Dog copy assignment operator called" << std::endl;
	Animal::operator=(other);
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
