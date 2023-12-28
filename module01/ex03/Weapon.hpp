/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:49:50 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 15:13:28 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {
	private:
		std::string type;
	public:
		explicit Weapon(const std::string &type);
		const std::string &getType();
		void setType(const std::string &type);
};

#endif
