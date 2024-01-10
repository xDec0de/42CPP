/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danimart <danimart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:14:19 by danimart          #+#    #+#             */
/*   Updated: 2024/01/10 16:44:49 by danimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>

class Harl
{
	public:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void complain(const std::string &level);
};

#endif
