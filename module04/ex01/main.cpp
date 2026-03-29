/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 12:50:27 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 13:25:08 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main(void) {
	std::cout << "--- Array of animals (half Dog, half Cat) ---" << std::endl;
	const int size = 4;
	Animal *animals[size];
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
	Dog dog1;
	dog1.getBrain()->setIdea(0, "I love bones!");
	dog1.getBrain()->setIdea(1, "Fetch is fun.");

	Dog dog2(dog1);
	std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;
	std::cout << "Same brain? " << (dog1.getBrain() == dog2.getBrain() ? "YES (shallow!)" : "NO (deep copy ok)") << std::endl;

	dog2.getBrain()->setIdea(0, "I like sleeping.");
	std::cout << "After modifying dog2:" << std::endl;
	std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

	return (0);
}
