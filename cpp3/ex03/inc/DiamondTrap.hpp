#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

class DiamondTrap : public ClapTrap, ScavTrap
{
private:
    std::string name;
public:
    DiamondTrap(/* args */);
    DiamondTrap(std::string name);
    ~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
}

DiamondTrap::~DiamondTrap()
{
}



#endif