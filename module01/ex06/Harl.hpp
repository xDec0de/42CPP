/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:40:36 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 18:52:37 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>

class Harl
{
	private:
		void complain(int lvl);
	public:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(const std::string &level);
};

#endif
