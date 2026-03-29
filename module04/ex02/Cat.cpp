/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:30:27 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 16:00:53 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): AAnimal("Cat"), brain(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): AAnimal(other), brain(NULL) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	AAnimal::operator=(other);
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound(void) const {
	std::cout << "Cat: Meow! Meow!" << std::endl;
}

Brain *Cat::getBrain(void) const {
	return (this->brain);
}
