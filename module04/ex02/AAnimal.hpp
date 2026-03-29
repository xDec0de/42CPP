/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 15:15:44 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 15:25:09 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <string>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(void);
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &other);
		AAnimal& operator=(const AAnimal &other);
		virtual ~AAnimal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif
