/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:47:27 by danimart          #+#    #+#             */
/*   Updated: 2023/12/28 14:00:46 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

int main(void) {
	Weapon club = Weapon("wooden sword");
	HumanA bob = HumanA("Bob", club);
	bob.attack();
	club.setType("metal bat");
	bob.attack();
}
