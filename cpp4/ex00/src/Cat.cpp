/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:35:11 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 11:08:11 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat default construcotr called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaaauuh!!!" << std::endl;    
}

// Animal class copy contructor
Cat::Cat(Cat const &orig)
{
    *this = orig;
    return;
}

//assignation operator overload.
Cat& Cat::operator=(Cat const& a)
{
    std::cout << "Animal Assignation operator called\n";
    this->type = a.type;
    return (*this);
}
