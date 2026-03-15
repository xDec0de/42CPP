/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/1 14:49:18 by danimart          #+#    #+#             */
/*   Updated: 2026/03/15 16:22:38 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:

		// Constructors & destructor //

		ScavTrap(void);
		ScavTrap(const std::string &name);
		~ScavTrap(void);

		// Copy constructor & operator //

		ScavTrap(const ScavTrap &other);
		ScavTrap& operator=(const ScavTrap &other);

		// Functions //

		void guardGate(void);
	protected:
		virtual std::ostream &prefix(void);
};

#endif
