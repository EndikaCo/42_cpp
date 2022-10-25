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

Cure::Cure()
{
    type = "cure";
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure* Cure::clone() const
{
    std::cout << "Cure clone method called" << std::endl;
    return (new Cure(*this));
}

void Cure::use(ICharacter& character)
{
   std::cout << "* heals " << character.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const &org){
    std::cout << "Cure = operator Called" << std::endl;
    type = org.type;
    return *this;
}

Cure::Cure(Cure const &r){
	std::cout << "Cure Copy Constructor Called" << std::endl;
    *this = r;
}
