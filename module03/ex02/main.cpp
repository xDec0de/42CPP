/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:23:16 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 21:41:14 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

void clapTests() {
	// ClapTrap stat tests //
	std::cout << "\nExecuting ClapTrap stats tests:" << std::endl;
	ClapTrap clap("ClapTrap");
	clap.attack("DamageZero");
	clap.beRepaired(10);
	clap.takeDamage(20);

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
}

void scavTests() {
	// Default constructor test //
	std::cout << "\nDefault constructor (ScavTrap):" << std::endl;
	ScavTrap def = ScavTrap();

	// Basic tests //
	std::cout << "\nBasic tests (ScavTrap):" << std::endl;
	def.attack("ClapTrap");
	def.takeDamage(58);
	def.beRepaired(58);
	def.guardGate();

	// String parameter constructor tests //
	std::cout << "\nString parameter constructors (ScavTrap):" << std::endl;
	ScavTrap damage("Damage");
	ScavTrap energy("Energy");
	ScavTrap zero("Zero");

	// Copy constructor tests //
	std::cout << "\nExecuting copy constructor tests:" << std::endl;
	ScavTrap copyCons(def);
	copyCons.attack("NameShouldBe:unknown");

	// Copy assignement operator tests //
	std::cout << "\nExecuting copy assignement operator tests (ScavTrap):" << std::endl;
	ScavTrap copyOp("CopyOperator");
	def = copyOp;
	def.attack("NameShouldBe:CopyOperator");

	// Energy tests //
	std::cout << "\nExecuting energy tests (ScavTrap):" << std::endl;
	for (int i = 0; i < 50; i++)
		energy.attack("ClapTrap");
	energy.attack("FAIL");
	energy.takeDamage(1);
	energy.beRepaired(1);
	energy.guardGate();

	// Lethal damage tests //
	std::cout << "\nExecuting lethal damage tests (ScavTrap):" << std::endl;
	damage.beRepaired(10);
	damage.takeDamage(10);
	damage.takeDamage(1000);
	damage.attack("Should not be able to attack.");
	damage.takeDamage(1);
	damage.beRepaired(1);
	damage.guardGate();

	// Zero amount tests //
	std::cout << "\nExecuting zero amount tests (ScavTrap):" << std::endl;
	zero.takeDamage(0);
	zero.beRepaired(0);

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
}

void fragTests() {
	// Default constructor test //
	std::cout << "\nDefault constructor (FragTrap):" << std::endl;
	FragTrap def = FragTrap();

	// Basic tests //
	std::cout << "\nBasic tests (FragTrap):" << std::endl;
	def.attack("ClapTrap");
	def.takeDamage(58);
	def.beRepaired(58);
	def.highFivesGuys();

	// String parameter constructor tests //
	std::cout << "\nString parameter constructors (FragTrap):" << std::endl;
	FragTrap damage("Damage");
	FragTrap energy("Energy");
	FragTrap zero("Zero");

	// Copy constructor tests //
	std::cout << "\nExecuting copy constructor tests:" << std::endl;
	FragTrap copyCons(def);
	copyCons.attack("NameShouldBe:unknown");

	// Copy assignement operator tests //
	std::cout << "\nExecuting copy assignement operator tests (FragTrap):" << std::endl;
	FragTrap copyOp("CopyOperator");
	def = copyOp;
	def.attack("NameShouldBe:CopyOperator");

	// Energy tests //
	std::cout << "\nExecuting energy tests (FragTrap):" << std::endl;
	for (int i = 0; i < 100; i++)
		energy.attack("ClapTrap");
	energy.attack("FAIL");
	energy.takeDamage(1);
	energy.beRepaired(1);
	energy.highFivesGuys();

	// Lethal damage tests //
	std::cout << "\nExecuting lethal damage tests (FragTrap):" << std::endl;
	damage.beRepaired(10);
	damage.takeDamage(10);
	damage.takeDamage(1000);
	damage.attack("Should not be able to attack.");
	damage.takeDamage(1);
	damage.beRepaired(1);
	damage.highFivesGuys();

	// Zero amount tests //
	std::cout << "\nExecuting zero amount tests (FragTrap):" << std::endl;
	zero.takeDamage(0);
	zero.beRepaired(0);

	// Destructors //
	std::cout << "\nDestructors:" << std::endl;
}

int main() {
	scavTests();
	fragTests();
	clapTests();
	return 0;
}
