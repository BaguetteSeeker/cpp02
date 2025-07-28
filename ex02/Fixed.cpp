/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 10:45:31 by epinaud           #+#    #+#             */
/*   Updated: 2025/07/28 02:17:19 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractValue = 8;

int Fixed::getRawBits( void ) const {
	return (_fixedValue);
}

void Fixed::setRawBits( int raw ) {
	this->_fixedValue = raw;
}

int 	Fixed::toInt() const {
	return (this->_fixedValue >> Fixed::_fractValue);
}

float	Fixed::toFloat() const {
	return ((float)this->_fixedValue / (float)(1 << Fixed::_fractValue));
}

/* ::ostream overload */
std::ostream&	operator<<(std::ostream& out, const Fixed& fixed) {
		return (out << fixed.toFloat());
}

/* Fixed Constructors */
Fixed::Fixed( void ) {
	// std::cout << "Default constructor called" << std::endl;
	this->_fixedValue = 0;
}

Fixed::Fixed( const int val ) {
	// std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = (val << Fixed::_fractValue);
}

Fixed::Fixed( const float val ) {
	// std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = (int)roundf(val * (1 << Fixed::_fractValue));
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue = copy.getRawBits();
	return (*this);
}

bool Fixed::operator>(const Fixed &copy) const {
	// std::cout << "Copy greaterThan operator called" << std::endl;
	return (this->getRawBits() > copy.getRawBits());
}

bool Fixed::operator<(const Fixed &copy) const {
	// std::cout << "Copy lowerThan operator called" << std::endl;
	return (this->getRawBits() < copy.getRawBits());
}

bool Fixed::operator>=(const Fixed &copy) const {
	// std::cout << "Copy greaterOrEqualTo operator called" << std::endl;
	return (this->getRawBits() >= copy.getRawBits());
}

bool Fixed::operator<=(const Fixed &copy) const {
	// std::cout << "Copy lowerOrEqualTo operator called" << std::endl;
	return (this->getRawBits() <= copy.getRawBits());
}

bool Fixed::operator==(const Fixed &copy) const {
	// std::cout << "Copy equal operator called" << std::endl;
	return (this->getRawBits() == copy.getRawBits());
}

bool Fixed::operator!=(const Fixed &copy) const {
	// std::cout << "Copy notEqual operator called" << std::endl;
	return (this->getRawBits() != copy.getRawBits());
}

Fixed Fixed::operator+(const Fixed &copy) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue += copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator-(const Fixed &copy) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue -= copy.getRawBits();
	return (*this);
}

Fixed Fixed::operator*(const Fixed &copy) {
		Fixed	results;
	// std::cout << "Copy assignement operator called" << std::endl;
	// this->_fixedValue *= copy.getRawBits();
	results.setRawBits((this->_fractValue * copy._fixedValue) >> this->_fractValue);
		return (results);
}

Fixed Fixed::operator/(const Fixed &copy) {
	Fixed	results;
	// std::cout << "Copy assignement operator called" << std::endl;
	results._fixedValue /= copy.getRawBits();
	return (results);
}

Fixed &Fixed::operator++( void ) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue++;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue++;
	return (tmp);
}

Fixed &Fixed::operator--( void ) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue--;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_fixedValue--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}
