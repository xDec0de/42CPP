/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:10:51 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 15:13:28 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(unsigned int idx) const {
	if (idx >= 100)
		return ("");
	return (this->ideas[idx]);
}

void Brain::setIdea(unsigned int idx, const std::string &idea) {
	if (idx < 100)
		this->ideas[idx] = idea;
}
