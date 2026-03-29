/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:07:28 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/21 18:20:51 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << "Cat copy assignment operator called" << std::endl;
	Animal::operator=(other);
	return *this;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Cat: Meow! Meow!" << std::endl;
}
