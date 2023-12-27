/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:46 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 19:36:47 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		int index;
		int size;
		Contact contacts[8];
		std::string right_align(const std::string &original, const int &charLimit);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact addContact(const std::string &first_name, const std::string &last_name, const std::string &nickname);
		bool printContacts();
		bool printContact(int index);
};

#endif
