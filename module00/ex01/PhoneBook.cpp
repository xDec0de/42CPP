/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/29 11:45:29 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->index = 0;
	this->size = 0;
}

PhoneBook::~PhoneBook(void) {}

std::string PhoneBook::right_align(std::string original, int charLimit)
{
	std::string limited = "";
	int len = original.length();
	for (int i = 0; i < charLimit; i++)
		limited += i >= len ? ' ' : original[i];
	if (len >= charLimit)
		limited[charLimit - 1] = '.';
	return limited;
}

void PhoneBook::printContacts()
{
	std::string limits = "|-------------------------------------------|";
	std::cout << limits << std::endl;
	std::cout << "|Index     |First Nam.|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->size; i++)
	{
		Contact contact = this->contacts[i];
		std::string info = "|" + std::to_string(i) + "         ";
		info += "|" + right_align(contact.getFirstName(), 10);
		info += "|" + right_align(contact.getLastName(), 10);
		info += "|" + right_align(contact.getNickname(), 10) + "|";
		std::cout << info << std::endl;
	}
	std::cout << limits << std::endl;
}

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
	if (this->size < 8)
		this->size++;
	return (contact);
}
