/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 13:50:11 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/23 14:10:29 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *templates[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &other);
		MateriaSource& operator=(const MateriaSource &other);
		~MateriaSource(void);
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);
};

#endif
