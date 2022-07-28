/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:52:29 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/28 11:53:04 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

#include <iostream>
//AMateria default constructor
AMateria::AMateria() : type("blank")
{
    std::cout << "AMateria default constructor called" << std::endl;  
}
//AMateria Parameter constructor
AMateria::AMateria(std::string const &type) : type(type)
{
    std::cout << "AMateria Parameter constructor called" << std::endl;
}

//AMateria destructor
AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (type);    
}
