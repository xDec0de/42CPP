/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:41:57 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 22:54:35 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
	this->name = "Unnamed";
}

Zombie::~Zombie(void) {
	std::cout << name + " died." << std::endl;
}

void Zombie::setName(const std::string &name) {
	this->name = name;
}

void Zombie::announce(void) {
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
