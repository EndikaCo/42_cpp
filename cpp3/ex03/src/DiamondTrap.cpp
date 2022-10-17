/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 10:13:36 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/05 09:19:18 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(/* args */) : ClapTrap("default_clap_name"), FragTrap(), ScavTrap()
{
    this->name = "default";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << this->name << " DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
    this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
    std::cout << this->name << " DiamondTrap parameter constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << this->name << " DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &orig)
{
	*this = orig;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &orig)
{
	if (this != &orig)
	{
		attackDamage = orig.attackDamage;
		hitPoints = orig.hitPoints;
		energyPoints = orig.energyPoints;
	}
    std::cout << "DiamondTrap assignment operator called" << std::endl;
	return *this;
}

//display its name and its clapTrap name.
void DiamondTrap::whoAmI()
{
    std::cout << "claptrap name-> " << ClapTrap::name << ", DiamondTrap name -> " << name << std::endl;
}


void DiamondTrap::attack(std::string const & target)
{
    std::cout << "DiamondTrap " << name << " attacks " << target
              << " causing " << hitPoints << " points of damage!\n";
}

void DiamondTrap::takeDamage(unsigned int amount)
{
    energyPoints -= amount;
    std::cout << "DiamondTrap " << name << " received: "
              << amount << " points of damage. "<< energyPoints
              << " energy points remaining" <<std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount)
{
    energyPoints += amount;
    std::cout << "DiamondTrap " << name << " repaired: "
              << amount << " energy points. "<< energyPoints
              << " energy points remaining" <<std::endl;
}

// ClapTrap getter for name
std::string DiamondTrap::getName(void)
{
    return (name);
}