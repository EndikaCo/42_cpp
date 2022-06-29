#include "../inc/Zombie.hpp"

//default constructor
Zombie::    Zombie()
{
}

//name setter
void Zombie::setname(std::string name)
{
    this->name = name;
}

//destructor
Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed\n"; 
}

void Zombie::announce(void)
{
    std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

