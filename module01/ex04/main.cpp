/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:24:32 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 15:58:39 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int prog_exit(std::string msg, int code) {
	std::cout << msg << std::endl;
	exit(code);
}

int sed(std::ifstream &file, std::string &filename, const std::string &to_find, const std::string &replacement) {
	std::ofstream copy(filename.append(".replace"), std::ofstream::out);
	std::string content;
	std::getline(file, content, '\0');
	const int tf_len = to_find.length();
	file.close();
	if (tf_len == 0)
		std::cout << "Warning: The text to replace is empty, the content won't be modified." << std::endl;
	else if (replacement.length() == 0)
		std::cout << "Warning: The replacement string is empty, the content won't be modified." << std::endl;
	else if (!to_find.compare(replacement))
		std::cout << "Warning: The text to replace is equal to the replacement, the content won't be modified." << std::endl;
	else {
		int last_index = content.find(to_find, 0);
		while (last_index != -1) {
			content.erase(last_index, tf_len);
			content.insert(last_index, replacement);
			last_index = content.find(to_find, last_index + 1);
		}
	}
	copy << content;
	copy.close();
	return 0;
}

int main(int argc, char const *argv[]) {
	if (argc != 4)
		prog_exit("Usage: ./sed <file name> <text to replace> <replacement>", 1);
	std::string filename = argv[1];
	std::ifstream file(filename, std::ifstream::in);
	if (!file.is_open())
		prog_exit("Error: Could not open file \"" + filename + "\", please check if the file exists.", 2);
	return sed(file, filename, argv[2], argv[3]);
}
