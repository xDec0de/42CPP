/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:37:52 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 15:07:31 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB {
	private:
		const std::string name;
		Weapon *weapon;
	public:
		explicit HumanB(const std::string &name);
		void attack();
		void setWeapon(Weapon &weapon);
		Weapon *getWeapon();
};

#endif
