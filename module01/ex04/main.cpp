/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:24:32 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 12:36:19 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <fstream>

int prog_exit(std::string msg, int code) {
	std::cout << msg << std::endl;
	exit(code);
}

int main(int argc, char const *argv[])
{
	if (argc != 4)
		prog_exit(ARGC_ERR, 1);
	std::ifstream file(argv[1], std::ifstream::in);
	if (!file.is_open())
		prog_exit(OPEN_ERR, 2);
	std::string to_find = argv[2];
	std::string replacement = argv[3];
	file.close();
	return 0;
}
