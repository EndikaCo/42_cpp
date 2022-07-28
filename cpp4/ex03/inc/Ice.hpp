/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:04:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/28 11:56:28 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string type);
        ~Ice();
        void use(ICharacter& character);
        Ice* clone() const;
};

Ice::Ice() : AMateria()
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string type) : AMateria(type)
{
    std::cout << "Ice parameter constructor called" << std::endl;  
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& character)
{
    std::cout << "* shoots an ice bolt at " << character.getName() << " *";
}

Ice* Ice::clone() const
{
    std::cout << "Ice clone method called" << std::endl;
    Ice *temp = new Ice(*this);
    return (temp);
}


#endif