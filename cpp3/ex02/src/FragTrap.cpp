/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:07:18 by ecorreia          #+#    #+#             */
/*   Updated: 2022/07/05 09:19:18 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// default constructor
FragTrap::FragTrap() : ClapTrap(), name("default")
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "Fragtrap default contructor called\n";
}

// parameter constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << name << " Fragtrap parameter contructor called\n";
}

// default destructor
FragTrap::~FragTrap()
{
    std::cout << name << " FragTrap destructor called\n";
}

FragTrap::FragTrap(FragTrap const &orig)
{
    *this = orig;
    std::cout << name << " FlagTrap copy constructor called\n";
}

//will display a positive high fives request on the standard output.
void FragTrap::highFivesGuys(void)
{
        std::cout << name <<" says: Give me a high five¡\n";
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << name << " attacks " << target
              << " causing " << hitPoints << " points of damage!\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    energyPoints -= amount;
    std::cout << "FragTrap " << name << " received: "
              << amount << " points of damage. "<< energyPoints
              << " energy points remaining" <<std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    energyPoints += amount;
    std::cout << "FragTrap " << name << " repaired: "
              << amount << " energy points. "<< energyPoints
              << " energy points remaining" <<std::endl;
}