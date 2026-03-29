/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 10:15:07 by daniema3          #+#    #+#             */
/*   Updated: 2026/03/22 10:40:22 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain(void);
		std::string getIdea(unsigned int idx) const;
		void setIdea(unsigned int idx, const std::string &idea);
};

#endif
