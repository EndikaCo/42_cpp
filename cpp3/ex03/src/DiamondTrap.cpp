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

DiamondTrap::DiamondTrap(/* args */) : ClapTrap("bot_clap_name"), FragTrap(), ScavTrap()
{
    this->name = "bot";
    this->FragTrap::hitPoints;
	this->ScavTrap::energyPoints;
	this->FragTrap::attackDamage;
    std::cout << this->name << " DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name + "_clap_name")
{
    this->name = name;
	this->FragTrap::hitPoints;
	this->ScavTrap::energyPoints;
	this->FragTrap::attackDamage;
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
    std::cout << " claptrap name-> " << ClapTrap::name << " this name -> " << name << std::endl; 
}