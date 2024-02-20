/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:23:16 by danimart          #+#    #+#             */
/*   Updated: 2024/02/20 12:35:12 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Test");
	clapTrap.beRepaired(10);
	clapTrap.beRepaired(0);
	clapTrap.takeDamage(10);
	clapTrap.takeDamage(0);
	clapTrap.attack("Another ClapTrap");
	clapTrap.takeDamage(500);
	clapTrap.beRepaired(500);
	clapTrap.attack("Should not be able to attack.");
	return 0;
}
