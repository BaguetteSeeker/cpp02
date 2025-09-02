/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:09:12 by epinaud           #+#    #+#             */
/*   Updated: 2025/09/02 14:36:30 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	bool	result;

	Point	testPt1(5.0f, 5.0f);
	result = bsp(Point(1.5, 3.0), Point(2, 3.0), Point(3, 2.0), testPt1);
	std::cout << "Is the point " << testPt1 << " within the triangle ? : " << result << std::endl;

	Point	testPt2(2, 2.80);
	result = bsp(Point(1.5, 3.0), Point(2, 3.0), Point(3, 2.0), testPt2);
	std::cout << "Is the point " << testPt2 << " within the triangle ? : " << result << std::endl;

	Point	testPt3(2.5, 1.5);
	result = bsp(Point(1.0, 1.0), Point(4, 1.0), Point(1, 3.0), testPt3);
	std::cout << "Is the point " << testPt3 << " within the triangle ? : " << result << std::endl;
	return (0);
}