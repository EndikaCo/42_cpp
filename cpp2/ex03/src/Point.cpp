/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:58:20 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/21 22:15:04 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point() : x(0) , y(0)
{
}

Point::~Point()
{
}

//Point assignation operator overload.
Point& Point::operator=(Point const& a)
{
    (Fixed)x = a.x;
    (Fixed)y = a.y;
    return (*this);
}

//A copy constructor.
Point::Point(Point const &orig)
{
    *this = orig;
    return;
}