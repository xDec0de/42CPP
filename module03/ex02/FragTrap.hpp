/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:18 by danimart          #+#    #+#             */
/*   Updated: 2024/02/21 21:26:39 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		// Constructors & destructor //

		FragTrap(void);
		FragTrap(const std::string &name);
		~FragTrap(void);

		// Copy constructor & operator //

		FragTrap(const FragTrap &other);
		FragTrap& operator=(const FragTrap &other);

		// Functions //

		void highFivesGuys(void);
};

#endif
