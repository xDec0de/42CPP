/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:31:17 by daniema3          #+#    #+#             */
/*   Updated: 2025/08/09 21:45:29 by daniema3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:
		int					_value;
		const static int	_bits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed(const int intValue);
		Fixed(const float floatValue);
		Fixed & operator = (const Fixed &other);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
