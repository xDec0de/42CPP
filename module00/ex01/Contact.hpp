/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:48:26 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 19:03:08 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
	public:
		Contact(void);
		~Contact(void);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		void setFirstName(const std::string first_name);
		void setLastName(const std::string last_name);
		void setNickname(const std::string nickname);
};

#endif
