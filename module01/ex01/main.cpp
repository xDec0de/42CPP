/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 22:39:30 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 22:45:41 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(const int &N, const std::string &name);

int main(void) {
	Zombie *horde = zombieHorde(5, "Horde");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	return 0;
}
