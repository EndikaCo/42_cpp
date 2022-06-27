#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:
        
    public:
        FragTrap(/* args */);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const &orig);
        void highFivesGuys(void);
};

// default constructor
FragTrap::FragTrap(/* args */)
{
    std::cout << "Fragtrap default contructor called\n";
}


// parameter constructor
FragTrap::FragTrap(/* args */)
{

    hitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;

    std::cout << "Fragtrap parameter contructor called\n";
}

// default destructor
FragTrap::~FragTrap()
{
}

//will display a positive high fives request on the standard output.
void FragTrap::highFivesGuys(void)
{

}


#endif