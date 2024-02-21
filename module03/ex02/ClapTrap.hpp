/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:17:39 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 20:31:27 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int health;
		unsigned int energy;
		unsigned int damage;
	public:

		// Constructors & destructor //

		ClapTrap(void);
		ClapTrap(const std::string &target);
		~ClapTrap(void);

		// Copy constructor & operator //

		ClapTrap(const ClapTrap &other);
		ClapTrap& operator=(const ClapTrap &other);

		// Functions //

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
