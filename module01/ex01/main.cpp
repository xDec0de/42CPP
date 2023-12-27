/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:39:30 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 23:08:32 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(const int &N, const std::string &name);

int main(void) {
	Zombie *horde = zombieHorde(5, "Horde");
	std::cout << "Announcing a horde of five zombies..." << std::endl;
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	std::cout << "Empty horde: " << zombieHorde(0, "Empty horde") << std::endl;
	std::cout << "Negative size horde: " << zombieHorde(-42, "Empty horde") << std::endl;
	return 0;
}
