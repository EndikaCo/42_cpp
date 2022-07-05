/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:35:27 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/05 09:19:18 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include <iostream>

//default constructor inherit from ClapTrap 
ScavTrap::ScavTrap() : ClapTrap()
{   
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20; 
    std::cout << name << " ScavTrap default constructor called\n";
}

//ScavTrap parameter constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20; 
    std::cout << name << " ScavTrap parameter constructor called\n";    
}

//ScavTrap destructor
ScavTrap::~ScavTrap()
{
    std::cout << name << " ScavTrap destrucotr called\n";    
}

//ScavTrap copy constructor
ScavTrap::ScavTrap(ScavTrap const &orig)
{
    *this = orig;
    std::cout << name << " ScavTrap Copy constructor called\n"; 
}

/*Will display a message on the standard outputs to anounce that ScavTrap have enterred
in Gate keeper mode.*/
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode\n";   
}