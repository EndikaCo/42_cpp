/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:01:46 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/01 14:01:47 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int fixedPoint;
    static const int FRACTIONAL_BITS = 8; 
public:
    Fixed();
    ~Fixed();
    Fixed(Fixed const &orig);
    Fixed &operator=(Fixed const &a); //Fixed to the left is const (may not be changed to have a different value).
    int getRawBits(void) const; //*this is constant inside member function (entire function declaration to the left is const)
    void setRawBits(int const raw);
};  

#endif