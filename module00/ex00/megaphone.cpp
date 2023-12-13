/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:35:36 by danimart          #+#    #+#             */
/*   Updated: 2023/11/30 16:38:06 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string to_megaphone(std::string str)
{
	std::string upper = "";
	int len = str.length();
	for (int i = 0; i < len; i++)
		if (i == 0 || str[i] != ' ' || (str[i] == ' ' && str[i - 1] != ' '))
			upper += toupper(str[i]);
	return (upper);
}

std::string get_input(int argc, char const *argv[])
{
	if (argc == 1)
		return ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::string input = argv[1];
	for (int i = 2; i < argc; i++)
		input += ' ' + argv[i];
	return (to_megaphone(input));
}

int main(int argc, char const *argv[])
{
	std::cout << get_input(argc, argv) << std::endl;
	return 0;
}
