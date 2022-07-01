/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:29:39 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 14:26:55 by ecorreia         ###   ########.fr       */
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
	d1 = area(point, a, b);
	d2 = area(point, b, c);
	d3 = area(point, a, c);
	if ( d1 + d2 + d3 == d0 )
		return (true);        
    else
		return (false);
}
