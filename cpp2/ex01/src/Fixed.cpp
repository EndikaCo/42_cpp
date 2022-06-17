/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 09:51:06 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/17 10:26:13 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include <iostream>

// A default constructor that initializes the fixed point value to 0.
Fixed::Fixed() : fixedPoint(0)
{
    std::cout << "Default constructor called\n";
}

//A destructor.
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

//A copy constructor.
Fixed::Fixed(Fixed const &orig)
{
    std::cout << "Copy constructor called\n";
    fixedPoint = orig.getRawBits();  
}

//An assignation operator overload.
Fixed& Fixed::operator=(Fixed const& a)
{
    std::cout << "Assignation operator called\n";
    this->fixedPoint = a.getRawBits();
    return (*this);
}

//A member function that returns the raw value of the fixed point value.
int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (fixedPoint); 
}

//A member function that sets the raw value of the fixed point value.
void Fixed::setRawBits( int const raw )
{
    fixedPoint = raw;    
}
    