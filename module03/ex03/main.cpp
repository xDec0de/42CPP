/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:00:00 by danimart          #+#    #+#             */
/*   Updated: 2025/08/15 18:00:00 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

void diamondTests() {
	// Default constructor test //
	std::cout << "\nDefault constructor (DiamondTrap):" << std::endl;
	DiamondTrap def = DiamondTrap();

	// Basic tests //
	std::cout << "\nBasic tests (DiamondTrap):" << std::endl;
	def.attack("ClapTrap");
	def.takeDamage(58);
	def.beRepaired(58);
	def.guardGate();
	def.highFivesGuys();
	def.whoAmI();

	// String parameter constructor tests //
	std::cout << "\nString parameter constructors (DiamondTrap):" << std::endl;
	DiamondTrap diamond("Gem");

	// Verify ClapTrap name has the _clap_name suffix //
	std::cout << "\nwhoAmI test (should show two different names):" << std::endl;
	diamond.whoAmI();

	// Copy constructor tests //
	std::cout << "\nExecuting copy constructor tests:" << std::endl;
	DiamondTrap copyCons(diamond);
	copyCons.whoAmI();

	// Copy assignement operator tests //
	std::cout << "\nExecuting copy assignement operator tests:" << std::endl;
	DiamondTrap copyOp("CopyOperator");
	def = copyOp;
	def.whoAmI();

	// Energy tests //
	std::cout << "\nExecuting energy tests (DiamondTrap):" << std::endl;
	DiamondTrap energy("Energy");
	for (int i = 0; i < 50; i++)
		energy.attack("target");
	energy.attack("FAIL");
	energy.guardGate();

	// Lethal damage tests //
	std::cout << "\nExecuting lethal damage tests (DiamondTrap):" << std::endl;
	DiamondTrap damage("Damage");
	damage.takeDamage(1000);
	damage.attack("Should not be able to attack.");
	damage.guardGate();
	damage.highFivesGuys();
	damage.whoAmI();

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
}

int main() {
	diamondTests();
	return 0;
}
