/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniema3 <daniema3@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:31:17 by daniema3          #+#    #+#             */
/*   Updated: 2025/08/12 17:01:22 by daniema3         ###   ########.fr       */
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
		Fixed &	operator = (const Fixed &other);
		bool	operator > (const Fixed &other) const;
		bool	operator < (const Fixed &other) const;
		bool	operator >= (const Fixed &other) const;
		bool	operator <= (const Fixed &other) const;
		bool	operator == (const Fixed &other) const;
		bool	operator != (const Fixed &other) const;
		Fixed	operator + (const Fixed &other) const;
		Fixed	operator - (const Fixed &other) const;
		Fixed	operator * (const Fixed &other) const;
		Fixed	operator / (const Fixed &other) const;
		Fixed &	operator++();
		Fixed	operator++(int);
		Fixed &	operator--();
		Fixed	operator--(int);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static Fixed&		max(Fixed &a, Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);
		static Fixed&		min(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
