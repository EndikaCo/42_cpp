/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:02:02 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/11 13:32:33 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

//Dog default construcotr
Dog ::Dog() : Animal() 
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog default construcotr called" << std::endl;
}

Dog ::~Dog ()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound(void) const
{
    std::cout << "Guauh!!!" << std::endl;    
}

// deep copy constructor (do not use same pointer as copied)
Dog::Dog(Dog const &orig) : Animal(), brain(new Brain)
{
    if (this != &orig)
        *this = orig;
    std::cout << "Cat deep copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &orig)
{
    type = orig.getType();
    *brain = *(orig.brain);
    std::cout << "Cat = operator overload called" << std::endl;
    return (*this);
}

std::string Dog::b_getIdeas(int n)
{
        return(brain->getIdeas(n)) ;      
}

void Dog::b_setIdea(std::string idea)
{
        int n = 0;
        while(!brain->getIdeas(n).empty())
                n++;
        brain->setIdea(idea);
}