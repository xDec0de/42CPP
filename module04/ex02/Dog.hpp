/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:28:16 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 15:38:44 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog(void);
		Dog(const Dog &other);
		Dog& operator=(const Dog &other);
		~Dog(void);
		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif
