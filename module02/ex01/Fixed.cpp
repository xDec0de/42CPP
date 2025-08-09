/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:31:07 by daniema3          #+#    #+#             */
/*   Updated: 2025/08/09 21:51:01 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default consctuctor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int intValue) {
	std::cout << "Int constructor called" << std::endl;
	this->_value = intValue << _bits;
}

Fixed::Fixed(const float floatValue) {
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(floatValue * (1 << _bits));
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = other._value;
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Desctuctor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::toInt(void) const {
	return _value >> _bits;
}

float Fixed::toFloat(void) const {
	return ((float) _value) / (1 << _bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
