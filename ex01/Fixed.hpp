/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:09:54 by epinaud           #+#    #+#             */
/*   Updated: 2025/07/27 21:06:58 by epinaud          ###   ########.fr       */
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
		Fixed &operator=(const Fixed &src);

		int		getRawBits( void ) const;
		void 	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);

#endif