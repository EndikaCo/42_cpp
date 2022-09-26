/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:24:29 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 12:00:43 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

// Animal class default constructor
WrongAnimal::WrongAnimal()
{
    std::cout << "Animal class default constructor called" << std::endl;
}
// Animal class destructor
WrongAnimal::~WrongAnimal()
{   
    std::cout << "Animal class destructor called" << std::endl;  
}
// Animal class copy contructor
WrongAnimal::WrongAnimal(WrongAnimal const &orig)
{
    *this = orig;
    return;    
}
    
std::string WrongAnimal::getType(void) const
{
    return (type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}