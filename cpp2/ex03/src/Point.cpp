/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:58:20 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/21 14:55:39 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point() : x(0) , y(0)
{
}

Point::~Point()
{
}

Point& Point::operator=(Point const& a)
{
    //x = a.x;
   // y = a.y;
    return (*this);
}

Point::Point(Point const &orig)
{
    *this = orig;
    return;
}