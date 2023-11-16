/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:21 by danimart         ###   ########.fr       */
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

int main(void)
{
	PhoneBook phonebook;

	std::string cmd = "";
	while (cmd != "EXIT")
	{
		std::cin >> cmd;
		if (cmd == "ADD")
			phonebook.addContact(get_input("first name"), get_input("last name"), get_input("nickname"));
	}
	return 0;
}
