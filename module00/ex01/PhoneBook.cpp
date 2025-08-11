/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2025/08/11 13:46:09 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook(void) : m_index(0), m_size(0) {}

PhoneBook::~PhoneBook(void) {}

std::string PhoneBook::limit(const std::string &original, const int &charLimit)
{
	std::string	limited = "";
	int			len = original.length();

	for (int i = 0; i < charLimit; i++)
		limited += i >= len ? ' ' : original[i];
	if (len >= charLimit)
		limited[charLimit - 1] = '.';
	return limited;
}

bool PhoneBook::printContacts()
{
	if (m_size == 0) {
		std::cout << "There are currently no contacts to display, please add at least one before searching." << std::endl;
		return false;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|Index     |First Nam.|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < m_size; i++) {
		Contact contact = m_contacts[i];
		std::cout << "|" << i << "         ";
		std::cout << "|" << limit(contact.getFirstName(), 10);
		std::cout << "|" << limit(contact.getLastName(), 10);
		std::cout << "|" << limit(contact.getNickname(), 10) << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	return true;
}

bool PhoneBook::printContact(int index)
{
	int	size = m_size - 1;

	if (index < 0) {
		std::cout << "Contact index must be a positive number, try again." << std::endl;
		return false;
	}
	if (index > size) {
		std::cout << "Contact " << index << " doesn't exist, max index is currently " << size << ", try again.";
		return false;
	} else {
		Contact contact = this->m_contacts[index];
		std::cout << "Index: " << index << std::endl;
		std::cout << "First name: " << contact.getFirstName() << std::endl;
		std::cout << "Last name: " << contact.getLastName() << std::endl;
		std::cout << "Nickname: " << contact.getNickname() << std::endl;
	}
	return true;
}

Contact PhoneBook::addContact(const std::string &first_name, const std::string &last_name, const std::string &nickname)
{
	Contact contact;

	contact.setFirstName(first_name);
	contact.setLastName(last_name);
	contact.setNickname(nickname);
	if (m_index == 8)
		m_index = 0;
	m_contacts[m_index] = contact;
	std::cout << "Contact added on index " << m_index << std::endl;
	m_index++;
	if (m_size < 8)
		m_size++;
	return contact;
}
