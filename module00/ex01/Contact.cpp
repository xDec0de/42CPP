/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2025/08/11 12:50:44 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string Contact::getFirstName(void)
{
	return (m_firstName);
}

std::string Contact::getLastName(void)
{
	return (m_lastName);
}

std::string Contact::getNickname(void)
{
	return (m_nickname);
}

void Contact::setFirstName(const std::string &firstName)
{
	m_firstName = firstName;
}

void Contact::setLastName(const std::string &lastName)
{
	m_lastName = lastName;
}

void Contact::setNickname(const std::string &nickname)
{
	m_nickname = nickname;
}
