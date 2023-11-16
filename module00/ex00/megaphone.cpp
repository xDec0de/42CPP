/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:35:36 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 12:38:02 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string ft_toupper(std::string str)
{
	int len = str.length();
	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
	return (str);
}

std::string get_input(int argc, char const *argv[])
{
	if (argc == 1)
		return ("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::string input = argv[1];
	for (int i = 2; i < argc; i++)
		input = input + ' ' + argv[i];
	return (ft_toupper(input));
}

int main(int argc, char const *argv[])
{
	std::cout << get_input(argc, argv) << std::endl;
	return 0;
}
