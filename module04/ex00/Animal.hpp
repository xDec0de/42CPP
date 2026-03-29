/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 16:45:22 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/21 17:20:07 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
