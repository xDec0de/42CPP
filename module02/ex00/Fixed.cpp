/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:39:07 by danimart          #+#    #+#             */
/*   Updated: 2024/01/11 17:21:45 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {
	std::cout << "Default consctuctor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = other.value;
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Desctuctor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
