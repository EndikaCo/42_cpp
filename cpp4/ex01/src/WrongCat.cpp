/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:35:11 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 11:58:39 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "Cat";
    std::cout << "WrongCat default construcotr called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miaaauuh!!!" << std::endl;    
}

// WrongCat class copy contructor
WrongCat::WrongCat(WrongCat const &orig)
{
    *this = orig;
    return;
}

//assignation operator overload.
WrongCat& WrongCat::operator=(WrongCat const& a)
{
    std::cout << "WrongCat Assignation operator called\n";
    this->type = a.type;
    return (*this);
}
