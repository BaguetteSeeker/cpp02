/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:09:54 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/19 22:37:08 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int _fixedValue;
		static const int _fractValue;

	public:
		Fixed( void );
		Fixed( const int );
		Fixed( const float );
		~Fixed( void );
		Fixed(const Fixed& copy);
		Fixed	&operator=(const Fixed &src);
		bool	operator>(const Fixed src) const;
		bool	operator<(const Fixed src) const;
		bool	operator>=(const Fixed src) const;
		bool	operator<=(const Fixed src) const;
		bool	operator==(const Fixed src) const;
		bool	operator!=(const Fixed src) const;

		Fixed	operator+(const Fixed src) const;
		Fixed	operator-(const Fixed src) const;
		Fixed	operator*(const Fixed src) const;
		Fixed	operator/(const Fixed src) const;

		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed);

#endif