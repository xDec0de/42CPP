/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:23:16 by danimart          #+#    #+#             */
/*   Updated: 2024/02/20 15:23:30 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	// Default constructor test //
	std::cout << "\nDefault constructor:" << std::endl;
	ScavTrap def = ScavTrap();
	def.attack("Another ClapTrap");
	def.beRepaired(32);
	def.takeDamage(32);

	// String parameter constructor tests //
	std::cout << "\nString parameter constructors:" << std::endl;
	ClapTrap damage("Damage");
	ClapTrap energy("Energy");
	ClapTrap zero("Zero");

	// Energy tests //
	std::cout << "\nExecuting energy tests:" << std::endl;
	for (int i = 0; i < 10; i++)
		energy.attack("Another ClapTrap");
	energy.attack("FAIL");
	energy.takeDamage(1);

	// Lethal damage tests //
	std::cout << "\nExecuting lethal damage tests:" << std::endl;
	damage.beRepaired(10);
	damage.takeDamage(10);
	damage.takeDamage(1000);
	damage.attack("Should not be able to attack.");
	damage.takeDamage(1);
	damage.beRepaired(1);

	// Zero amount tests //
	std::cout << "\nExecuting zero amount tests:" << std::endl;
	zero.takeDamage(0);
	zero.beRepaired(0);

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
	return 0;
}
