/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:01:35 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 14:01:36 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int fixedPoint;
    static const int FRACTIONAL_BITS = 8; 
public:
    Fixed();
    Fixed(const int par);
    Fixed(const float par);
    ~Fixed();
    Fixed(Fixed const &orig);
    Fixed &operator=(Fixed const &a);
    int getRawBits( void ) const; 
    void setRawBits( int const raw ); 
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& output, const Fixed& fixedPoint);

#endif