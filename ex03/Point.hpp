/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 22:33:12 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/19 23:23:10 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point( void );
		Point(const float x, const float y);
		Point(const Point& copy);
		~Point( void );
		const Fixed &getX( void ) const;
		const Fixed &getY( void ) const;

		Point &operator=(const Point &src);
};

bool 			bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream	&operator<<(std::ostream &o, Point const &point);

#endif