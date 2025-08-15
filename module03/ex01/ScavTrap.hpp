/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:18 by danimart          #+#    #+#             */
/*   Updated: 2025/08/15 17:45:16 by daniema3         ###   ########.fr       */
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
	protected:
		virtual std::ostream &prefix(void);
};

#endif
