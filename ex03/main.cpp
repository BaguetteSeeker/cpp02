/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epinaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:09:12 by epinaud           #+#    #+#             */
/*   Updated: 2025/08/20 23:46:19 by epinaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {
	bool	result;

	Point	testPt1(5.0f, 5.0f);
	result = bsp((Point){1.5, 3.0}, (Point){2, 3.0}, (Point){3, 2.0}, testPt1);
	std::cout << "Is the point " << testPt1 << " within the triangle ? : " << result << std::endl;

	Point	testPt2(2, 2.80);
	result = bsp((Point){1.5, 3.0}, (Point){2, 3.0}, (Point){3, 2.0}, testPt2);
	std::cout << "Is the point " << testPt2 << " within the triangle ? : " << result << std::endl;
	return (0);
}