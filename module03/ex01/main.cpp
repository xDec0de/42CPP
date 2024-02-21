/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:23:16 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 21:16:33 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
	// Default constructor test //
	std::cout << "\nDefault constructor:" << std::endl;
	ScavTrap def = ScavTrap();

	// Basic tests //
	std::cout << "\nBasic tests:" << std::endl;
	def.attack("ClapTrap");
	def.takeDamage(58);
	def.beRepaired(58);
	def.guardGate();

	// String parameter constructor tests //
	std::cout << "\nString parameter constructors:" << std::endl;
	ScavTrap damage("Damage");
	ScavTrap energy("Energy");
	ScavTrap zero("Zero");

	// Copy constructor tests //
	std::cout << "\nExecuting copy constructor tests:" << std::endl;
	ScavTrap copyCons(def);
	copyCons.attack("NameShouldBe:unknown");

	// Copy assignement operator tests //
	std::cout << "\nExecuting copy assignement operator tests:" << std::endl;
	ScavTrap copyOp("CopyOperator");
	def = copyOp;
	def.attack("NameShouldBe:CopyOperator");

	// Energy tests //
	std::cout << "\nExecuting energy tests:" << std::endl;
	for (int i = 0; i < 50; i++)
		energy.attack("ClapTrap");
	energy.attack("FAIL");
	energy.takeDamage(1);
	energy.beRepaired(1);
	energy.guardGate();

	// Lethal damage tests //
	std::cout << "\nExecuting lethal damage tests:" << std::endl;
	damage.beRepaired(10);
	damage.takeDamage(10);
	damage.takeDamage(1000);
	damage.attack("Should not be able to attack.");
	damage.takeDamage(1);
	damage.beRepaired(1);
	damage.guardGate();

	// Zero amount tests //
	std::cout << "\nExecuting zero amount tests:" << std::endl;
	zero.takeDamage(0);
	zero.beRepaired(0);

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
	return 0;
}
