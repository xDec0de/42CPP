/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:58:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 17:29:31 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA {
	private:
		const std::string name;
		const Weapon &weapon;
	public:
		explicit HumanA(const std::string &name, const Weapon &weapon);
		void attack();
		Weapon getWeapon();
};

#endif
