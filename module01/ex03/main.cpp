/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:47:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 14:59:01 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
	Weapon weapon("wooden sword");
	HumanA bob("Bob", weapon);
	bob.attack();
	weapon.setType("metal bat");
	bob.attack();
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(weapon);
	jim.attack();
	weapon.setType("wooden sword");
	jim.attack();
}
