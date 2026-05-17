/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 10:25:19 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 11:15:37 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria &other);
		virtual ~AMateria(void);
		std::string const &getType(void) const;
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);
};

#endif
