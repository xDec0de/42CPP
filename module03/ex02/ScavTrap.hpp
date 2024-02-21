/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:18 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 20:31:47 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
};

#endif
