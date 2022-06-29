#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(/* args */);
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &orig);
        DiamondTrap& operator=(const DiamondTrap &orig);
        void whoAmI();
};

#endif