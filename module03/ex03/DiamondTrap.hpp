/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:24:53 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/15 17:05:07 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;

	public:

		// Constructors & destructor //

		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		~DiamondTrap(void);

		// Copy constructor & operator //

		DiamondTrap(const DiamondTrap &other);
		DiamondTrap& operator=(const DiamondTrap &other);

		// Functions //

		using ScavTrap::attack;
		void whoAmI(void);

	protected:
		virtual std::ostream &prefix(void);
};

#endif
