/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:06:39 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/26 19:35:32 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//sign[edge] = AP.x * BA.y - BA.x * AP.y
//(true if on the left of edge AB, false if overlaping or positioned to the right)
//Optional method :  AP.X * BP.Y - BP.X * AP.Y
static Fixed	isLeftOfBsp(Point a, Point b, Point pt) {
	return (a.getX() - pt.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - pt.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	sign[3];
	
	sign[0] = isLeftOfBsp(a, b, point) > 0;
	sign[1] = isLeftOfBsp(b, c, point) > 0;
	sign[2] = isLeftOfBsp(c, a, point) > 0;

	return (sign[0] == sign[1] && sign[1] == sign[2]);
}