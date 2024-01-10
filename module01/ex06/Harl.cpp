/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:40:22 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 18:57:33 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	info();
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	warning();
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	error();
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(int lvl) {
	switch (lvl) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			debug();
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			info();
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			warning();
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::complain(const std::string &level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int lvl = -1;
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			lvl = i;
			break;
		}
	}
	complain(lvl);
}
