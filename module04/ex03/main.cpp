/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 15:15:33 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 16:45:09 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(void) {
	std::cout << "--- Subject test ---" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "--- Extra tests ---" << std::endl;
	MateriaSource src2;
	src2.learnMateria(new Ice());
	src2.learnMateria(new Cure());
	src2.learnMateria(new Ice());

	Character alice("alice");
	Character eve("eve");

	AMateria *m1 = src2.createMateria("ice");
	AMateria *m2 = src2.createMateria("cure");
	AMateria *m3 = src2.createMateria("unknown");

	alice.equip(m1);
	alice.equip(m2);
	alice.equip(m3);

	alice.use(0, eve);
	alice.use(1, eve);
	alice.use(2, eve);

	std::cout << std::endl << "--- Full inventory test ---" << std::endl;
	Character warrior("warrior");
	warrior.equip(src2.createMateria("ice"));
	warrior.equip(src2.createMateria("ice"));
	warrior.equip(src2.createMateria("cure"));
	warrior.equip(src2.createMateria("cure"));
	AMateria *overflow = src2.createMateria("ice");
	warrior.equip(overflow);
	for (int i = 0; i < 4; i++)
		warrior.use(i, alice);
	delete overflow;

	std::cout << std::endl << "--- Deep copy test ---" << std::endl;
	Character hero("hero");
	hero.equip(src2.createMateria("ice"));
	hero.equip(src2.createMateria("cure"));
	Character heroCopy(hero);
	heroCopy.use(0, eve);
	heroCopy.use(1, eve);

	return (0);
}
