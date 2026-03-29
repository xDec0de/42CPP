/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 16:05:18 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 16:20:44 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void) {
	// AAnimal a; // must not compile: AAnimal is abstract

	std::cout << "--- Array of animals (half Dog, half Cat) ---" << std::endl;
	const int size = 4;
	AAnimal *animals[size];
	for (int i = 0; i < size / 2; i++)
		animals[i] = new Dog();
	for (int i = size / 2; i < size; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "--- Make sounds ---" << std::endl;
	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	std::cout << std::endl << "--- Deleting array ---" << std::endl;
	for (int i = 0; i < size; i++)
		delete animals[i];

	std::cout << std::endl << "--- Deep copy test ---" << std::endl;
	Cat cat1;
	cat1.getBrain()->setIdea(0, "I want tuna.");
	cat1.getBrain()->setIdea(1, "Sleep is my purpose.");

	Cat cat2(cat1);
	std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;
	std::cout << "Same brain? " << (cat1.getBrain() == cat2.getBrain() ? "YES (shallow!)" : "NO (deep copy ok)") << std::endl;

	cat2.getBrain()->setIdea(0, "Actually I prefer fish.");
	std::cout << "After modifying cat2:" << std::endl;
	std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
	std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

	return (0);
}
