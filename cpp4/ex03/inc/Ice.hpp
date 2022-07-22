/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:04:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/21 10:47:00 by ecorreia         ###   ########.fr       */
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
        ~Ice();
        Ice(std::string type);
        void use(ICharacter& character);
};

Ice::Ice() : AMateria()
{
}

Ice::Ice(std::string type) : AMateria(type)
{
    
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& character)
{
    std::cout << "* shoots an ice bolt at " << character.getName() << " *";
}


#endif