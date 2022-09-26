/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:46:59 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/29 11:47:13 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria()
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string type) : AMateria(type)
{
    std::cout << "Cure parameter constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    std::cout << "Cure clone method called" << std::endl;
    Cure *temp = new Cure(*this);
    return (temp);
}

void Cure::use(ICharacter& character)
{
   std::cout << "* heals " << character.getName() << "'s wounds *" << std::endl;
}
