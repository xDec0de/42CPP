/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:57:58 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {}

Contact PhoneBook::addContact(std::string first_name, std::string last_name, std::string nickname)
{
	Contact contact;
	contact.setFirstName(first_name);
	contact.setLastName(last_name);
	contact.setNickname(nickname);
	if (this->index == 7)
		this->index = 0;
	this->contacts[this->index] = contact;
	std::cout << "Contact added on index " << this->index << std::endl;
	this->index++;
	return (contact);
}
