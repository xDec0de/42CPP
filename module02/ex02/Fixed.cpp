/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:31:07 by daniema3          #+#    #+#             */
/*   Updated: 2025/08/10 20:22:39 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/*
 - Constructors
 */

Fixed::Fixed(void) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
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

/*
 - Destructor
 */

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/*
 - Assignment operator
 */

Fixed &Fixed::operator = (const Fixed &other) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = other._value;
	return *this;
}

/*
 - Comparison operators
 */

bool Fixed::operator > (const Fixed &other) const {
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator < (const Fixed &other) const {
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator >= (const Fixed &other) const {
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator <= (const Fixed &other) const {
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator == (const Fixed &other) const {
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator != (const Fixed &other) const {
	return this->toFloat() != other.toFloat();
}

/*
 - Insertion operator
 */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

/*
 - Raw bits
 */

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

/*
 - Primitive type conversion
 */

int Fixed::toInt(void) const {
	return _value >> _bits;
}

float Fixed::toFloat(void) const {
	return ((float) _value) / (1 << _bits);
}
