/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:55:31 by danimart          #+#    #+#             */
/*   Updated: 2023/12/27 22:21:13 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of string is: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is: " << &stringREF << std::endl;

	std::cout << "The value of string is: " << string << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << stringREF << std::endl;

	return 0;
}
