/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:46 by danimart          #+#    #+#             */
/*   Updated: 2025/08/11 13:45:49 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		int			m_index;
		int			m_size;
		Contact		m_contacts[8];
		std::string	limit(const std::string &original, const int &charLimit);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact addContact(const std::string &first_name, const std::string &last_name, const std::string &nickname);
		bool printContacts();
		bool printContact(int index);
};

#endif
