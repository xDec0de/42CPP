/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:58:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 14:39:54 by danimart         ###   ########.fr       */
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
		explicit HumanA(const std::string name, Weapon &weapon);
		void attack();
		Weapon getWeapon();
};

#endif
