/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:58:20 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/22 12:52:10 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

//Point default constructor
Point::Point() : x(0) , y(0)
{
    //std::cout << "Point default constructor called" << std::endl;
}

/*Point constructor that takes two constant floating points as parameters
and that initializes x and y with those values.*/
Point::Point(float x, float y) : x(x), y(y)
{
    std::cout << "Point float constructor called" << x << " & " << y << std::endl;
}

//Point default destructor
Point::~Point()
{
    //std::cout << "Point destructor called" << std::endl;
}

//Point assignation operator overload.
Point& Point::operator=(Point const& a)
{
    (Fixed)x = a.x;
    (Fixed)y = a.y;
    return (*this);
}

//Point copy constructor.
Point::Point(Point const &orig)
{
    *this = orig;
    return;
}

//Point getter for X atributte
Fixed Point::getX(void)
{
    //std::cout << "getX" << x << std::endl;
    return (x);    
}

//Point getter for Y atributte
Fixed Point::getY(void)
{
    //std::cout << "getY" << y << std::endl;
    return (y);    
}
