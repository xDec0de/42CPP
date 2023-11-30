/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/30 15:35:56 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string get_input(std::string name)
{
	std::string input;
	std::cout << "Input " + name + ":" << std::endl;
	std::cin >> input;
	return (input);
}

int cin_as_int()
{
	std::string in;
	int result = 0;

	std::cin >> in;
	for (unsigned long i = 0; i < in.size(); i++) {
		if (in[i] >= '0' && in[i] <= '9')
			result = result * 10 + (in[i] - '0');
		else
			return (-1);
	}
	return (result);
}

int main(void)
{
	PhoneBook phonebook;
	std::string cmd = "";
	while (cmd != "EXIT") {
		std::cout << "Input a command (ADD, SEARCH or EXIT):" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
			phonebook.addContact(get_input("first name"), get_input("last name"), get_input("nickname"));
		if (cmd == "SEARCH") {
			phonebook.printContacts();
			bool success = false;
			while (!success) {
				std::cout << "Input the index of the contact display:" << std::endl;
				success = phonebook.printContact(cin_as_int());
			}
		}
	}
	return 0;
}
