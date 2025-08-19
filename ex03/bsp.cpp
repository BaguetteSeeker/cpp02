/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 00:06:39 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/19 22:45:08 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

//sign[edge] = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
// sign[edge] = AP.x * AB.Y - AB.x * AP.Y
bool bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	sign[3];
	sign[0] = ((a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY())) > 0;
	sign[1] = ((b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY())) > 0;
	sign[2] = ((c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY())) > 0;

	return (sign[0] == sign[1] && sign[1] == sign[2]);
}