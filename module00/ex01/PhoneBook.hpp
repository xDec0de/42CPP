/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/29 11:25:18 by danimart         ###   ########.fr       */
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
		std::string right_align(std::string original, int charLimit);
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact addContact(std::string first_name, std::string last_name, std::string nickname);
		void printContacts();
};

#endif