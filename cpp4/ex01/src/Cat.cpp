/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 10:35:11 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/11 13:36:11 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat default construcotr called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaaauuh!!!" << std::endl;    
}

// deep copy constructor (do not use same pointer as copied)
Cat::Cat(Cat const &orig) : Animal(), brain(new Brain)
{
    if (this != &orig)
        *this = orig;
    std::cout << "Cat deep copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &orig)
{
    type = orig.getType();
    *brain = *(orig.brain);
    std::cout << "Cat = operator overload called" << std::endl;
    return (*this);
}

std::string Cat::b_getIdeas(int n)
{
    return(brain->getIdeas(n)) ;      
}

void Cat::b_setIdea(std::string idea)
{
        int n = 0;
        while(!brain->getIdeas(n).empty())
                n++;
        brain->setIdea(idea);
}