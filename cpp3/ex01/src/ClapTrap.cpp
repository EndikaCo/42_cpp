/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:32:33 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/05 09:19:18 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

// ClapTrap default constructor
ClapTrap::ClapTrap(): name("Bot")
{
    std::cout << name << "   Claptrap default constructor called\n";
}

// ClapTrap parameter constructor
ClapTrap::ClapTrap(std::string nm) : name(nm)
{
    std::cout << name << " Claptrap parameter constructor called\n";
}
// ClapTrap desstructor
ClapTrap::~ClapTrap()
{
    std::cout << name << " Claptrap destructor called\n";
}
// ClapTrap copy constructor
ClapTrap::ClapTrap(ClapTrap &orig)
{
    *this = orig;
    std::cout << name << " Claptrap copy constructor called\n";
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
    std::cout << "Claptrap assignation operator called\n";
    name = a.name;
    hitPoints = a.hitPoints;
    energyPoints = a.energyPoints;
    attackDamage = a.attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << name << " attacks " << target 
    << " causing " << hitPoints << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    energyPoints -= amount;
    std::cout << "ClapTrap " << name << " received: " 
    << amount << " points of damage. "<< energyPoints 
    << " energy points remaining" <<std::endl;    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    energyPoints += amount;
    std::cout << "ClapTrap " << name << " repaired: " 
    << amount << " energy points. "<< energyPoints 
    << " energy points remaining" <<std::endl;  
}



