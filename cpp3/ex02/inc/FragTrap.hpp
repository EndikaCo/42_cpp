#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const &orig);
        void highFivesGuys(void);
};

#endif