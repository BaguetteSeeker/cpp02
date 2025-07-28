/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:09:12 by epinaud           #+#    #+#             */
/*   Updated: 2025/07/28 15:34:42 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	/* Custom tests */
	std::cout << "\nCustom tests" << std::endl;

	std::cout << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << b - a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << "A is < than B: " << (a < b) << std::endl;
	std::cout << "A equals B: " << (a == b) << std::endl;
	std::cout << "A * B: " << a * b << std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return (0);
}