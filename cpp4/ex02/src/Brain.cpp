/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:31:54 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/11 11:48:10 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain(/* args */)
{
       std::cout << "Brain class default constructor called" << std::endl;    
}

Brain::~Brain()
{
        std::cout << "Brain class destructor called" << std::endl;  
}

std::string Brain::getIdeas(int n)
{
        return(ideas[n]) ;      
}

void Brain::setIdea(std::string idea)
{
        int n = 0;
        while(!ideas[n].empty())
                n++;
        ideas[n] = idea;
}

Brain::Brain(Brain const &orig)
{
    *this = orig;
    return;
}

Brain& Brain::operator=(Brain const& orig)
{
    for(int i=0; i < 100; i++)
        this->ideas[i] = orig.ideas[i];
    return (*this);
}
