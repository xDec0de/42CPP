/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:11:09 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string process_add(PhoneBook phonebook)
{
	std::string first_name;
	std::cout << "Input first name:" << std::endl;
	std::cin >> first_name;
	std::string last_name;
	std::cout << "Input last name:" << std::endl;
	std::cin >> last_name;
	std::cout << "Input nickname:" << std::endl;
	std::string nickname;
	std::cin >> nickname;
	phonebook.addContact(first_name, last_name, nickname);
	return ("ADD");
}

std::string process_cmd(std::string cmd, PhoneBook phonebook)
{
	if (cmd == "ADD")
		return (process_add(phonebook));
	return (cmd);
}

int main(void)
{
	PhoneBook phonebook;

	std::string cmd;
	std::cin >> cmd;
	while (process_cmd(cmd, phonebook) != "EXIT")
		std::cin >> cmd;
	return 0;
}
