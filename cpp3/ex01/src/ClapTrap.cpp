/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:32:33 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/23 19:20:42 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// ClapTrap default constructor
ClapTrap::ClapTrap(): name("Bot")
{
}

// ClapTrap parameter constructor
ClapTrap::ClapTrap(std::string nm) : name(nm)
{
    std::cout << name << " Constructor called\n";
}
// ClapTrap desstructor
ClapTrap::~ClapTrap()
{
    std::cout << name << " Destructor called\n";
}
// ClapTrap copy constructor
ClapTrap::ClapTrap(ClapTrap &orig)
{
    *this = orig;
    std::cout << name << " Copy constructor called\n";
}
// ClapTrap getter for name
std::string ClapTrap::getName(void)
{
    return (name);    
}
// ClapTrap getter for hit points
int ClapTrap::getHitPoints(void)
{
    return (hitPoints);     
}

//Fixed assignation operator overload.
ClapTrap& ClapTrap::operator=(ClapTrap const& a)
{
    std::cout << "Assignation operator called\n";
    name = a.name;
    hitPoints = a.hitPoints;
    EnergyPoints = a.EnergyPoints;
    AttackDamage = a.AttackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << name << " attacks " << target 
    << " causing " << hitPoints << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    EnergyPoints -= amount;
    std::cout << "ClapTrap " << name << " received: " 
    << amount << " points of damage. "<< EnergyPoints 
    << " energy points remaining" <<std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    EnergyPoints += amount;
    std::cout << "ClapTrap " << name << " repaired: " 
    << amount << " energy points. "<< EnergyPoints 
    << " energy points remaining" <<std::endl;  
}



