/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 14:49:18 by danimart          #+#    #+#             */
/*   Updated: 2025/08/15 17:51:21 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

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
	protected:
		virtual std::ostream &prefix(void);
};

#endif
