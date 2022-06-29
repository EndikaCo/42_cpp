/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorreia <ecorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 10:07:18 by ecorreia          #+#    #+#             */
/*   Updated: 2022/06/28 10:53:20 by ecorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

// default constructor
FragTrap::FragTrap() : ClapTrap()
{
    hitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "Fragtrap default contructor called\n";
}

// parameter constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
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
