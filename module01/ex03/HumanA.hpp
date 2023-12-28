/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:58:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 13:59:46 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	private:
		const std::string name;
		Weapon &weapon;
	public:
		HumanA(const std::string name, Weapon &weapon);
		void attack();
		Weapon getWeapon();
};

#endif
