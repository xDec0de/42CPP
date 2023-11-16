/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 16:31:40 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		int index;
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact addContact(std::string first_name, std::string last_name, std::string nickname);
};

#endif