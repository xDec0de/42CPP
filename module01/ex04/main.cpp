/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:24:32 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 15:03:40 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <iostream>
#include <fstream>

int prog_exit(std::string msg, int code) {
	std::cout << msg << std::endl;
	exit(code);
}

int sed(std::ifstream &file, std::string &filename, const std::string &to_find, const std::string &replacement) {
	std::ofstream copy(filename.append(".replace"), std::ofstream::out);
	(void) to_find;
	(void) replacement;
	file.close();
	return 0;
}

int main(int argc, char const *argv[]) {
	if (argc != 4)
		prog_exit(ARGC_ERR, 1);
	std::string filename = argv[1];
	std::ifstream file(filename, std::ifstream::in);
	if (!file.is_open())
		prog_exit(OPEN_ERR, 2);
	return sed(file, filename, argv[2], argv[3]);
}
