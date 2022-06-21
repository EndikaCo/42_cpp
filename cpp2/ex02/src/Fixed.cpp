/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:51:06 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/21 12:49:16 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <cmath>

// A default constructor that initializes the fixed point value to 0.
Fixed::Fixed() : fixedPoint(0)
{
    //std::cout << "Default constructor called\n";
}

/*A constructor that takes a constant integer as a parameter and that
converts it to the correspondant fixed(8) point value*/
Fixed::Fixed(const int par)
{
    fixedPoint = par << FRACTIONAL_BITS;
    //std::cout << "Int constructor called\n";   
    return;
}

/* A constructor that takes a constant floating point as a parameter and that converts
it to the correspondant fixed(8) point value.*/
Fixed::Fixed(const float par)
{
    fixedPoint = roundf(par * (1 << FRACTIONAL_BITS));
    //std::cout << "Float constructor called\n";
}

//A destructor.
Fixed::~Fixed()
{
    //std::cout << "Destructor called\n";
}

//A copy constructor.
Fixed::Fixed(Fixed const &orig)
{
    *this = orig;
    //std::cout << "Copy constructor called\n";
	return ;
}

/*COMPARISON OVERLOAD OPERATORS*/
//comparison overload operator >
bool Fixed::operator>(Fixed const &a)
{
    return (fixedPoint > a.fixedPoint);
}
//comparison overload operator <
bool Fixed::operator<(Fixed const &a)
{
    return (fixedPoint < a.fixedPoint);
}
//comparison overload operator <=
bool Fixed::operator<=(Fixed const &a)
{
    return (fixedPoint <= a.fixedPoint);
}
//comparison overload operator >=
bool Fixed::operator>=(Fixed const &a)
{
    return (fixedPoint >= a.fixedPoint); 
}
//comparison overload operator ==
bool Fixed::operator==(Fixed const &a)
{
    return (fixedPoint == a.fixedPoint); 
}
//comparison overload operator !=
bool Fixed::operator!=(Fixed const &a)
{
    return (fixedPoint != a.fixedPoint); 
}

//An assignation operator overload.
Fixed& Fixed::operator=(Fixed const& a)
{
    //std::cout << "Assignation operator called\n";
    this->fixedPoint = a.getRawBits();
    return (*this);
}

/*ARITMETHIC OPERATORS*/
//arithmetic overloads operators +
Fixed Fixed::operator+(Fixed const &a) const
{
    Fixed fixed;
     fixed = fixedPoint + a.fixedPoint;
    return (fixed); 
}
//arithmetic overloads operators -
Fixed Fixed::operator-(Fixed const &a) const
{
    Fixed fixed;
    fixed = fixedPoint - a.fixedPoint;
    return (fixed);    
}
//arithmetic overloads operators *
Fixed Fixed::operator*(Fixed const &a) const
{
    Fixed fixed;
    fixed = fixedPoint * a.fixedPoint;
    return (fixed); 
}
//arithmetic overloads operators /
Fixed Fixed::operator/(Fixed const &a) const
{
    Fixed fixed;
    fixed = fixedPoint / a.fixedPoint;
    return (fixed);     
}

/*INCREMENT OPERATORS*/
//pre increment overload operator "++i"
Fixed Fixed::operator++() 
{
    fixedPoint += 1;
    return (*this);
}
//post increment overload operator "i++"
Fixed Fixed::operator++(int) 
{
    Fixed cpy(*this);
	operator++();
    return (cpy);
}

/*DECREMENT OPERATORS*/
//pre increment overload operator "--i"
Fixed Fixed::operator--()
{
    fixedPoint -= 1;
    return (*this);
}
//post increment overload operator "i--"
Fixed Fixed::operator--(int)
{
    Fixed cpy(*this);
	operator--();
    return (cpy);
}

//A member function that returns the raw value of the fixed point value.
int Fixed::getRawBits( void ) const
{
    //std::cout << "getRawBits member function called\n";
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

/*The static member function min that takes references on two fixed point values and
returns a reference to the smallest value,*/

Fixed& Fixed::min(Fixed &a, Fixed  &b)
{
    return (a < b ? a : b);
}

/* and an overload that takes references on
two constant fixed point values and returns a reference to the smallest constant
value.*/
const Fixed& Fixed::min(  Fixed const &a,  Fixed const &b)
{
    return (a.getRawBits() < b.getRawBits() ? a : b);
}

/* The static member function max that takes references on two fixed point values
and returns a reference to the biggest value, */

Fixed& Fixed::max(Fixed &a, Fixed  &b)
{
    return (a > b ? a : b);
}

/*and an overload that takes references
on two constant fixed point values and returns a reference to the biggest constant
value.*/ 

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a.getRawBits() > b.getRawBits() ? a : b);
}

/*An overload to the « operator that inserts a floating point representation of the
fixed point value into the parameter output stream.*/
std::ostream& operator<<(std::ostream& output, const Fixed& fixedP)
{
	output << fixedP.toFloat();
	return (output);
}