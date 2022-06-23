
#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include <iostream>

//inherit from ClapTrap 

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap( name)
{
    
}

ScavTrap::~ScavTrap()
{
}