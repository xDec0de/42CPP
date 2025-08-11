/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:48:26 by danimart          #+#    #+#             */
/*   Updated: 2025/08/11 12:49:32 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string	m_firstName;
		std::string	m_lastName;
		std::string	m_nickname;
	public:
		Contact(void);
		~Contact(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		void		setFirstName(const std::string &firstName);
		void		setLastName(const std::string &lastName);
		void		setNickname(const std::string &nickname);
};

#endif
