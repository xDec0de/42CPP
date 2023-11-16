/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:35:04 by danimart          #+#    #+#             */
/*   Updated: 2023/11/16 15:00:20 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

std::string process_cmd(std::string cmd)
{
	return (cmd);
}

int main(void)
{
	std::string cmd;
	std::cin >> cmd;
	while (process_cmd(cmd) != "EXIT")
		std::cin >> cmd;
	return 0;
}
