/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:45:31 by epinaud           #+#    #+#             */
/*   Updated: 2025/07/27 13:58:04 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractValue = 8;

int Fixed::getRawBits( void ) const {
	return (_fixptValue);
}

void Fixed::setRawBits( int raw ) {
	this->_fixptValue = raw;
}

int 	Fixed::toInt() const {
	return (this->_fixptValue >> Fixed::_fractValue);
}

float	Fixed::toFloat() const {
	return ((float)this->_fixptValue / (float)(1 << Fixed::_fractValue));
}

/* ::ostream overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed) {
		return (out << fixed.toFloat());
}

/* Fixed Constructors */
Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	this->_fixptValue = 0;
}

Fixed::Fixed( const int val ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixptValue = (val << Fixed::_fractValue);
}

Fixed::Fixed( const float val ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixptValue = (int)roundf(val * (1 << Fixed::_fractValue));
	 
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixptValue = copy.getRawBits();
	return (*this);
}
