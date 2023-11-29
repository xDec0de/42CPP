/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/29 11:45:33 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// |-------------------------------------------|
// |Index     |First Nam.|Last Name |Nickname  |
// |----------|----------|----------|----------|
// |1         |Hello     |World     |Hello Wor.|
// |2         |Test      |Test      |TestName  |
// |-------------------------------------------|

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
		if (cmd == "SEARCH")
			phonebook.printContacts();
	}
	return 0;
}
