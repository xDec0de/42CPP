/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:55:46 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 14:59:05 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook(void);
};

#endif