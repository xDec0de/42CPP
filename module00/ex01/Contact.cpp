/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:13:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 15:59:13 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

std::string Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string Contact::getLastName(void)
{
	return (this->last_name);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

void Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}
