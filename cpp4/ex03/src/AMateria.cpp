/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:52:29 by ecorreia          #+#    #+#             */
/*   Updated: 2022/08/01 13:23:15 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"


#include <iostream>
//AMateria default constructor
AMateria::AMateria()
{
    type = "blank";
    std::cout << "AMateria default constructor called" << std::endl;  
}
//AMateria Parameter constructor
AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria Parameter constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & org)
{
    std::cout << "AMaeria copy constructor called" << std::endl;
    *this = org;  
}

//AMateria destructor
AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);    
}

void AMateria::use(ICharacter& target)
{
    target.getName();
    std::cout << "AMateria use called" << std::endl;      
}
        

AMateria &AMateria::operator=(const AMateria& orig)
{
    std::cout << "AMateria assigment operator called" << std::endl; 
    if (this != &orig)
        type = orig.getType();
    return (*this);
}
