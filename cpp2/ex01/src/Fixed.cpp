/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:51:06 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/20 11:39:27 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

// A default constructor that initializes the fixed point value to 0.
Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called\n";
}

/*A constructor that takes a constant integer as a parameter and that
converts it to the correspondant fixed(8) point value*/
Fixed::Fixed(const int par)
{
    fixedPoint = par << FRACTIONAL_BITS;
    std::cout << "Int constructor called\n";   
    return;
}

/* A constructor that takes a constant floating point as a parameter and that converts
it to the correspondant fixed(8) point value.*/
Fixed::Fixed(const float par)
{
    fixedPoint = roundf(par * (1 << FRACTIONAL_BITS));
    std::cout << "Float constructor called\n";
}

//A destructor.
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

//A copy constructor.
Fixed::Fixed(Fixed const &orig)
{
    *this = orig;
    std::cout << "Copy constructor called\n";
	return ;
}

//An assignation operator overload.
Fixed& Fixed::operator=(Fixed const& a)
{
    std::cout << "Assignation operator called\n";
    this->fixedPoint = a.getRawBits();
    return (*this);
}

/*An overload to the « operator that inserts a floating point representation of the
fixed point value into the parameter output stream.*/
std::ostream& operator<<(std::ostream& output, const Fixed& fixedP)
{
	output << fixedP.toFloat();
	return (output);
}

//A member function that returns the raw value of the fixed point value.
int Fixed::getRawBits( void ) const
{
    return (fixedPoint); 
}

//A member function that sets the raw value of the fixed point value.
void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;    
}

/*A member function that converts the fixed point
value to a floating point value.*/
float Fixed::toFloat( void ) const
{
    return(roundf(fixedPoint) / (1 << FRACTIONAL_BITS));
}

/*
A member function that converts the fixed point value
to an integer value.
*/
int Fixed::toInt( void ) const
{
     return(fixedPoint >> FRACTIONAL_BITS);
    
}


    