/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:04:15 by ecorreia          #+#    #+#             */
/*   Updated: 2022/08/01 14:17:49 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice()
{
    type = "ice";
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

void Ice::use(ICharacter& character)
{
    std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
}

Ice* Ice::clone() const
{
    std::cout << "Ice clone method called" << std::endl;
    return (new Ice(*this));
}

Ice	&Ice::operator=(Ice const &r){
    type = r.type;
    return *this;
}

Ice::Ice(Ice const &r){
	std::cout << "Ice Copy Constructor Called" << std::endl;
    *this = r;
}

