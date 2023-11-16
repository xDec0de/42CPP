/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:03:19 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {}

PhoneBook::~PhoneBook(void) {}

Contact PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname)
{
	Contact contact;
	contact.setFirstName(first_name);
	contact.setLastName(last_name);
	contact.setNickname(nickname);
	std::cout << "First name: " + contact.getFirstName() << std::endl;
	std::cout << "Last name: " + contact.getLastName() << std::endl;
	std::cout << "Nickname: " + contact.getNickname() << std::endl;
	return (contact);
}
