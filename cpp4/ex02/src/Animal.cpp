/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:24:29 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 11:06:41 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Animal class default constructor
Animal::Animal()
{
    std::cout << "Animal class default constructor called" << std::endl;
}
// Animal class destructor
Animal::~Animal()
{   
    std::cout << "Animal class destructor called" << std::endl;  
}
// Animal class copy contructor
Animal::Animal(Animal const &orig)
{
    *this = orig;
    return;    
}
    
std::string Animal::getType(void) const
{
    return (type);
}

void Animal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}