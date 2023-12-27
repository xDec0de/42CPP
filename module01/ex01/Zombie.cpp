/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:41:57 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 19:39:22 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &name) {
	this->name = name;
}

Zombie::~Zombie(void) {
	std::cout << name + " died." << std::endl;
}

void Zombie::announce(void) {
	std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
