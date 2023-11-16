/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:03:54 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string process_cmd(std::string cmd, PhoneBook phonebook)
{
	phonebook.addContact("First", "Second", "Third");
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
