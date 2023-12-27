/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 16:42:02 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 20:06:07 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(const std::string &name);
void randomChump(const std::string &name);

int main(void)
{
	Zombie *z = newZombie("OriginalZombieName");
	z->announce();
	randomChump("Chump");
	delete z;
	return (0);
}
