/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:24:29 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/05 13:24:59 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

// Animal class default constructor
Animal::Animal()
{
    std::cout << "Animal class default constructor" << std::endl;
}
// Animal class destructor
Animal::~Animal()
{   
    std::cout << "Animal class destructor" << std::endl;  
}
// Animal class copy contructor
Animal::Animal(Animal const &orig)
{
    *this = orig;
    return;    
}
    