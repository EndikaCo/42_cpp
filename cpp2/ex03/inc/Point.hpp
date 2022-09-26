/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 13:45:18 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/23 09:33:41 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(float x, float y);
        ~Point();
        Point(Point const &orig);
        Point& operator=(Point const& a);

        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif