/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:02:11 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/20 23:22:22 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {

}

Point::Point( const float x, const float y ) : _x(x), _y(y) {

}

Point::Point( const Point &copy ) : _x(copy.getX()), _y(copy.getY()){

}

Point::~Point( void ) {

}

const Fixed &Point::getX( void ) const {
	return (this->_x);
}

const Fixed &Point::getY( void ) const {
	return (this->_y);
}

Point &Point::operator=(const Point &src) {
	(void)src;
	/* Cannot modify const attributes */
	// this->_x = src.getX();
	// this->_y = src.getY();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Point const &point) {
	o << "_x[" << point.getX() << "] _y[" << point.getY() << "]";
	return (o);
}
