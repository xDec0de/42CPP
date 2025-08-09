/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:24:32 by danimart          #+#    #+#             */
/*   Updated: 2025/08/09 16:53:12 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int prog_exit(const std::string &msg, int code) {
	std::cout << msg << std::endl;
	exit(code);
}

std::string replace_all(const std::string &line, const std::string &to_find, const std::string &replacement) {
	if (to_find.empty() || to_find == replacement || replacement.empty())
		return line;
	std::string result;
	std::string::size_type pos = 0;
	std::string::size_type found;
	while ((found = line.find(to_find, pos)) != std::string::npos) {
		result.append(line, pos, found - pos);
		result.append(replacement);
		pos = found + to_find.length();
	}
	result.append(line, pos, line.length() - pos);
	return result;
}

void sed(std::ifstream &file, const std::string &filename, const std::string &to_find, const std::string &replacement) {
	std::ofstream copy((filename + ".replace").c_str(), std::ofstream::out);
	std::string line;
	while (std::getline(file, line))
		copy << replace_all(line, to_find, replacement) << '\n';
	file.close();
	copy.close();
}

int main(int argc, char const *argv[]) {
	if (argc != 4)
		prog_exit("Usage: ./sed <file name> <text to replace> <replacement>", 1);
	std::string filename = argv[1];
	std::ifstream file(filename.c_str(), std::ifstream::in);
	if (!file.is_open())
		prog_exit("Error: Could not open file \"" + filename + "\", please check if the file exists.", 2);
	sed(file, filename, argv[2], argv[3]);
	return 0;
}
