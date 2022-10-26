/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:02:02 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/06 10:50:07 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Dog default construcotr
Dog ::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog default construcotr called" << std::endl;
}

Dog ::~Dog ()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Guauh!!!" << std::endl;    
}

// Animal class copy contructor
Dog::Dog(Dog const &orig)
{
    *this = orig;
    return;
}

//assignation operator overload.
Dog& Dog::operator=(Dog const& a)
{
    std::cout << "Animal Assignation operator called\n";
    this->type = a.type;
    return (*this);
}
