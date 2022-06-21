/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:32:33 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/20 21:28:45 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string nm) : name(nm)
{
}

ClapTrap::~ClapTrap()
{
    
}

void ClapTrap::attack(std::string const & target)
{
    
    std::cout << "ClapTrap " << name << "attacks" << target 
    << "causing" << "damage" << "points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << "received: " 
    << amount << " damage"<< std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
}

