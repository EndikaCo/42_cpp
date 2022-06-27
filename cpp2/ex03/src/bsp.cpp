/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:29:39 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/23 10:14:56 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"


/*
Area(ΔABC) = Area(Trap.BAED) + Area(Trap.ACFE) - Area(Trap.BCFD)
Trapezium Area = (1/2) × Sum of bases × Height
*/
float area( Point a, Point b, Point c)
{
    float TrapBAED =  a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat());
    float TrapACFE =  b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat()) ;
    float TrapBCFD =  c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat());

    float area = (TrapBAED + TrapACFE + TrapBCFD) / 2;
    
    //std::cout << "a.getX: " << a.getX().toFloat() << std::endl;
      
    return ((area<0)?(-area):(area));
}

/**
 * @brief Function which indicates whether a point isinside of a triangle or not
 * 
 * @param a vertice of our beloved triangle
 * @param b vertice of our beloved triangle
 * @param c vertice of our beloved triangle
 * @param point point we are evaluating
 * @return true if the point is inside the triangle
 * @return false if the point is a vertex or a point that is on the edge
 */
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d0, d1, d2, d3;

	d0 = area(a, b, c);
    std::cout << "area: " << d0 << std::endl;
	d1 = area(point, a, b);
    std::cout << "area: " << d1 << std::endl;
	d2 = area(point, b, c);
    std::cout << "area: " << d2 << std::endl;
	d3 = area(point, a, c);
    std::cout << "area: " << d3 << std::endl;

	if ( d1 + d2 + d3 == d0 )
    {
        std::cout << "Point inside triangle" << std::endl;
		return (true);        
    }
    else
        std::cout << "Point out of triangle" << std::endl;
		return (false);
}