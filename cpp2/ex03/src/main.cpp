/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 21:35:52 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 14:35:30 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

int main( void )
{

	Point a(0, 0);
    Point b(20, 0);
    Point c(10, 35);
    
    Point point1(10, 35.05f);
    Point point2(10, 34.95f);

	if (bsp(a, b, c, point1) == true)
		std::cout << "point1 is inside of a triangle" << std::endl;
	else
		std::cout << "point1 isn't inside of a triangle" << std::endl;
	
    if (bsp(a, b, c, point2) == true)
		std::cout << "point2 is inside of a triangle" << std::endl;
	else
		std::cout << "point2 isn't inside of a triangle" << std::endl;
    
    return (0);
}