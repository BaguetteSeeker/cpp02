/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 23:02:11 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/19 23:09:52 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {

}

Point::Point( const float x, const float y ) : _x(x), _y(y) {

}

Point::Point( const Point &copy ) {
	*this = copy;
}


Point::~Point( void ) {

}

const Fixed &Point::getX( void ) const {
	return (this->_x);
}

const Fixed &Point::getY( void ) const {
	return (this->_y);
}

Point &Point::operator=(const Point &src){
	// *this = src;
	(void)src;
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Point const point) {
	o << "_x: " << point.getX() << " / _y: " << point.getY() << std::endl;
	return (o);
}
